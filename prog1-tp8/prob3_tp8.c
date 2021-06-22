#include <stdio.h>

int main()
{
    int i,j;
    float v[4][4];  // 4 alunos -> nr mec. nota1/2  ; double(lf) dava melhor, media devia ser float e resto int;
    for(i=0; i < 4; i++)
    {
        printf("Dados do aluno %d: ", i+1);
            for(j=0; j<3; j++)
            {
                scanf("%f", &v[i][j]);
                v[i][3] = (v[i][1] + v[i][2]) / 2;
            }
            
    }
    printf("Número  Nota 1  Nota 2  Media\n");
    for(i=0; i < 4; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%.1f  ", v[i][j]);
        }
       printf("\n"); 
    }

    return 0;
}