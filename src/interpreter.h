int lex ( char *inputFilePath, char *outputFilePath );
int parse( char *inputFilePath, char *outputFilePath);
int handleExecutionMode( char *mode );
int handleFiles ( char *inputFilePath, char *outputFilePath );
char *changeExtension( char *path, char *newExtension);
int execute( int mode, char *inputFilePath, char *outputFilePath );
