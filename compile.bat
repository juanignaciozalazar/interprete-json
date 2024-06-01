SET ROOTDIR="%cd%"
cd src\lexer
flex lexer.l
cd ..\..
gcc src\interpreter.c -o bin\interpreter.exe
dotnet build src/ui/Lexer/Lexer.csproj -o bin/