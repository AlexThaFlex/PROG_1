#include <stdio.h>
int main() {
    int op1=0, op2=0, op3=0;
    char x;
    float ux, uy, uz, vx, vy, vz, e;

    while(scanf(" %c", &x) == 1){
        switch (x){
            case 'A': scanf("%f %f %f %f %f %f", &ux, &uy, &uz, &vx, &vy, &vz);
            printf("u + v = (%f, %f, %f)\n", ux + vx, uy + vy, uz + vz);
            op1++;
            break;
            case 'B': scanf("%f %f %f %f", &e, &ux, &uy, &uz);
            printf("c.u = (%f, %f, %f)\n", e*ux, e*uy, e*uz);
            op2++;
            break;
            case 'C': scanf("%f %f %f %f %f %f", &ux, &uy, &uz, &vx, &vy, &vz);
            printf("u.v = %f\n", ux*vx + uy*vy + uz*vz);
            op3++;
            break;
        }
    }
    printf("Adição de valores: %d\n", op1);
    printf("Produto de um escalar: %d\n", op2);
    printf("Produto escalar de valores: %d\n", op3);
    
    return 0;
}