#include <stdio.h>
int main(){
    int t1, t2, p1, p2;
    t1 = t2 = p1 = p2 = 0;
    
    for(int i = 0; i < 10; i++){
        printf("Partida nrª %d\n", i+1);
        printf("Quais foram os pontos da nossa equipa: ");
        scanf("%d", & p1);
        printf("Quais foram os pontos da outra equipa: ");
        scanf("%d", & p2);

        if(p1 > 60){
            t1++;
               if(p1 > 90)
                 t1++;
        }
        else{
            t2++;
              if(p2 > 90)
                t2++;
        }
    }
    printf("A %s equipa ganhou %d-%d.\n", t1>t2? "nossa": "outra", t1>t2? t1: t2, t1>t2? t2 : t1 );
return 0;
}

