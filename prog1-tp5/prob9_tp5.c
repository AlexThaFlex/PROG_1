#include <stdio.h>

int soma_binario(int x, int y){
  int sum, i=1, remainder = 0, num=0;
  while (x != 0 && y != 0 && )
    {
        sum =((x % 10) ^ (y % 10) ^ remainder);
        remainder = ((x % 10)*(y % 10) + remainder * ((x % 10) ^ (y % 10)));
        x = x / 10;
        y = y / 10;
        
        num = num + sum * i;
        i*= 10;
    }
    return num;
}//incomplete

int main(){
    int x, y;
    printf("Insira o primeiro operando: ");
    scanf("%d", &x);
    printf("Insira o segundo operando: ");
    scanf("%d", &y);

    printf("A soma dos dois numeros binarios é: %d\n", soma_binario(x, y));
    return 0;
}