using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;

namespace Lexer
{
    internal class LexerHelper
    {

        private string inputFilePath;
        private string outputFilePath;
        private bool isInputTemp = false;
        private bool isOutputTemp = false;

        private static readonly string INPUT_TEMP_FILE_NAME = "lex_input.tmp";
        private static readonly string OUTPUT_TEMP_FILE_NAME = "lex_output.tmp";

        public LexerHelper(string inputFilePath, string outputFilePath)
        {
            this.inputFilePath = inputFilePath;
            this.outputFilePath = outputFilePath;
        }

        public static string lexFromString(string input)
        {

            string inputFilePath = Path.Combine(Path.GetTempPath(), INPUT_TEMP_FILE_NAME);
            string outputFilePath = Path.Combine(Path.GetTempPath(), OUTPUT_TEMP_FILE_NAME);

            File.WriteAllText(inputFilePath, input);

            LexerHelper helper = new LexerHelper(inputFilePath, outputFilePath);

            helper.isInputTemp = true;
            helper.isOutputTemp = true;

            int lexerReturnValue = helper.callLexer();

            Debug.WriteLine(lexerReturnValue.ToString());

            string outputText = helper.readOutputFile();

            return outputText;

        }


        public int callLexer()
        {
            var returnValue = lex(new StringBuilder(this.inputFilePath), new StringBuilder(this.outputFilePath));

            return returnValue;

        }

        private string readOutputFile()
        {
            return File.ReadAllText(outputFilePath.ToString());
        }
        private int lex(StringBuilder inputFileName, StringBuilder outputFileName)
        {
            ProcessStartInfo startInfo = new ProcessStartInfo();
            startInfo.CreateNoWindow = false;
            startInfo.UseShellExecute = false;
            startInfo.FileName = Program.ReadSetting(Program.interpreterKey);
            startInfo.CreateNoWindow = true;
            startInfo.Arguments = $"{inputFileName} {outputFileName}";

            try
            {

                using( Process lexerProcess = Process.Start(startInfo)! )
                {
                    lexerProcess.WaitForExit();
                }

                return 0;

            } catch(Exception ex)
            {
                Console.WriteLine(ex.ToString());
                return -1;
            }
        }
    }
}
