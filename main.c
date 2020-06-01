#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    char* input;
    if(argc>=2){//Übergabeparameter benutzen
        input=malloc(sizeof(char)+sizeof(char)*strlen(argv[1]));
        strcpy(input,argv[1]);
    }else{//Textdatei benutzen
        FILE *fp;
        input=malloc(sizeof(char)*255);//Ersten 255 Zeichen einlesen
        fp = fopen("/tmp/test.txt", "w+");
        fgets(input, 255, (FILE*)fp);    
    }
    return 0;
}
