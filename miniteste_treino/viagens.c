#include <stdio.h>
int main(){
    int combustivelbase = 350, dur;
    char car;
    float peso, ca,cb, cc, total=0;
    
    while(scanf(" %c", &car) == 1){
        switch(car){
            case 'A': scanf("%d %f", &dur, &peso);
            ca = combustivelbase + (dur * peso / 10);
            printf("%.2f\n", ca);
            total += ca;
            break;
            case 'B': scanf("%d %f", &dur, &peso);
            cb = combustivelbase + (dur * ((peso / 1500)*(peso/1500)));
            printf("%.2f\n", cb);
            total += cb;
            break;
            case 'C': scanf("%d %f", &dur, &peso);
            cc = combustivelbase + (dur * dur * dur);
            printf("%.2f\n", cc);
            total += cc;
            break;
        }
    }
    printf("%.2f (total)\n", total);
    return 0;
}