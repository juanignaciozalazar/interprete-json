SET ROOTDIR="%cd%"
cd src\parser
bison --warnings=all --verbose parser.y
cd ../lexer
flex lexer.l
cd ../..
gcc src\interpreter.c -o bin\interpreter.exe
dotnet build src/ui/Lexer/Lexer.csproj -o bin/