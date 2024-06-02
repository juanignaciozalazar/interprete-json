cd src/lexer
flex lexer.l
cd ../..
gcc src/interpreter.c -o bin/interpreter.out
