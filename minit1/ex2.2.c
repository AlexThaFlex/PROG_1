#include <stdio.h>

float calcula(float v1, float v2, char grand){
  float res;
    switch(grand)
        {
            case 'V':
                res = v1 * v2;
                return res;
                break;
            case 'R':
                res = v2 / v1;
                return res;
                break;
            case 'I':
                res = v1 / v2;
                return res;
                break;
}
}

int main(){
    float v1, v2, res;
    char grand;

    while (scanf("%f %f %c", &v1, &v2, &grand) == 3)
    {
        res = calcula(v1, v2, grand);
        switch(grand)
        {
            case 'V':
                printf("%.2f V\n", res);
                break;
            case 'R':
                printf("%.2f Ohm\n", res);
                break;
            case 'I':
                printf("%.2f A\n", res);
                break;
        }
    }
}