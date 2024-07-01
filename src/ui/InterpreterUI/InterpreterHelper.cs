using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;

namespace Interpreter
{

    enum executionMode {
        PARSING = 0,
        LEXER = 1
    }

    internal class InterpreterResult
    {
        public string? Text;
        public bool Success;
        internal InterpreterResult(string? text, bool success) {
            this.Text = text;
            this.Success = success;
        }
    }

    internal class InterpreterHelper
    {

        private string inputFilePath;
        private string? outputFilePath;
        private string? templateFilePath;
        private bool isInputTemp = false;
        private bool isOutputTemp = false;

        private static readonly string INPUT_TEMP_FILE_NAME = "interpreter_input.json";
        private static readonly string OUTPUT_TEMP_FILE_NAME = "interpreter_output.html";

        public InterpreterHelper(string inputFilePath, string outputFilePath)
        {
            this.inputFilePath = inputFilePath;
            this.outputFilePath = outputFilePath;
        }

        public InterpreterHelper(string inputFilePath, string? outputFilePath, string? templateFilePath)
        {
            this.inputFilePath= inputFilePath;
            this.outputFilePath= outputFilePath;
            this.templateFilePath= templateFilePath;
        }

        public static InterpreterResult lexFromString(string input)
        {

            string inputFilePath = Path.Combine(Path.GetTempPath(), INPUT_TEMP_FILE_NAME);
            string outputFilePath = Path.Combine(Path.GetTempPath(), OUTPUT_TEMP_FILE_NAME);

            File.WriteAllText(inputFilePath, input);

            InterpreterHelper helper = new InterpreterHelper(inputFilePath, outputFilePath);

            helper.isInputTemp = true;
            helper.isOutputTemp = true;

            int interpreterReturnValue = helper.callLexer();

            Debug.WriteLine(interpreterReturnValue.ToString());

            string outputText = helper.readOutputFile();

            return new InterpreterResult(outputText, interpreterReturnValue == 0);

        }

        public static InterpreterResult parseFromString(string input)
        {
            string inputFilePath = Path.Combine(Path.GetTempPath(), INPUT_TEMP_FILE_NAME);
            string outputFilePath = Path.Combine(Path.GetTempPath(), OUTPUT_TEMP_FILE_NAME);

            File.WriteAllText(inputFilePath, input);

            InterpreterHelper helper = new InterpreterHelper(inputFilePath, outputFilePath);

            helper.isInputTemp = true;
            helper.isOutputTemp = true;

            int interpreterReturnValue = helper.callParser();

            Debug.WriteLine(interpreterReturnValue.ToString());

            string outputText = helper.readOutputFile();

            return new InterpreterResult(outputText, interpreterReturnValue == 0);
        }

        public static bool parseFromFile(string inputFilePath, string? outputFilePath, string? templateFilePath)
        {

            InterpreterHelper helper = new InterpreterHelper(inputFilePath, outputFilePath, templateFilePath);

            helper.isInputTemp = false;
            helper.isOutputTemp = false;

            int interpreterReturnValue = helper.callParser();

            Debug.WriteLine(interpreterReturnValue.ToString());

            if (outputFilePath == null)
            {
                string implicitOutputFilePath = Path.ChangeExtension(inputFilePath, "html");
                new Process
                {
                    StartInfo = new ProcessStartInfo($"\"{implicitOutputFilePath}\"")
                    {
                        UseShellExecute = true
                    }
                }.Start();
            }
            else
            {
                new Process
                {
                    StartInfo = new ProcessStartInfo($"\"{outputFilePath}\"")
                    {
                        UseShellExecute = true
                    }
                }.Start();
            }

            return interpreterReturnValue == 0;
        }


        public int callLexer()
        {
            var returnValue = lex( this.inputFilePath, this.outputFilePath);

            return returnValue;

        }

        public int callParser()
        {
            var returnValue = parse( this.inputFilePath, this.outputFilePath, this.templateFilePath);
            
            return returnValue;
        }

        private string readOutputFile()
        {
            if ( this.outputFilePath != null )
            {
                try
                {
                    return File.ReadAllText(outputFilePath.ToString());
                }
                catch ( Exception ex )
                {
                    Debug.WriteLine(ex.Message );
                    return string.Empty;
                }
            }
            return string.Empty;            
        }
        private int lex(string inputFileName, string? outputFileName)
        {
            ProcessStartInfo startInfo = new ProcessStartInfo();
            startInfo.CreateNoWindow = false;
            startInfo.UseShellExecute = false;
            startInfo.FileName = Program.ReadSetting(Program.interpreterKey);
            startInfo.CreateNoWindow = true;
            startInfo.Arguments = ((int)executionMode.LEXER).ToString();
            startInfo.Arguments += $" \"{inputFileName}\"";
            if (outputFileName != null)
            {
                startInfo.Arguments += $" \"{outputFileName}\"";
            }

            Debug.WriteLine($"Llamando al interprete con los argumentos: {startInfo.Arguments}");

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

        private int parse(string inputFileName, string? outputFileName, string? templateFileName)
        {
            // No se puede ejecutar con template y sin archivo de salida
            if ( outputFileName == null && templateFileName != null)
            {
                return -1;
            }

            ProcessStartInfo startInfo = new ProcessStartInfo();
            startInfo.CreateNoWindow = false;
            startInfo.UseShellExecute = false;
            startInfo.FileName = Program.ReadSetting(Program.interpreterKey);
            startInfo.CreateNoWindow = true;
            startInfo.Arguments = ((int)executionMode.PARSING).ToString();
            startInfo.Arguments += $" \"{inputFileName}\"";

            if (outputFileName != null)
            {
                startInfo.Arguments += $" \"{outputFileName}\"";
            }

            if (templateFileName != null)
            {
                startInfo.Arguments += $" \"{templateFileName}\"";
            }            

            Debug.WriteLine($"Llamando al interprete con los argumentos: {startInfo.Arguments}");

            try
            {

                using (Process interpreterProcess = Process.Start(startInfo)!)
                {
                    interpreterProcess.WaitForExit();
                    return interpreterProcess.ExitCode;
                }

            }
            catch (Exception ex)
            {
                Console.WriteLine(ex.ToString());
                return -1;
            }
        }

    }
}
