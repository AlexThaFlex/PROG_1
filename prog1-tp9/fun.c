void inverte(char *strOriginal, char *strInvertida)
{
    int len;
    len = strlen(strOriginal) -1;
    for(int i=0; i < len; i++)
    {
        strInvertida[i]=strOriginal[len-i-1];
    }
}//clang fun.c -c, depois a compilar no principal, #include "filename.h", compilar incluindo fun.o;