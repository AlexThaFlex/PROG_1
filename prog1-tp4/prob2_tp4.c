#include<stdio.h>
int main() {
 int i=2, num;
    
    printf("Introduza um número: \n");
    scanf("%d", &num);
    
    while(i >= 2 && i <=num){
    if (num % i == 0)
    {
        printf("%d ", i);
        num /= i;
    }
    else
    {
        i += 1;
    }
    }
    printf("\n");
}   
    
