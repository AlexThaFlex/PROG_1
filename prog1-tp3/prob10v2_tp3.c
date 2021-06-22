#include <stdio.h>

void convertunidades(int num){
      int uni;
      num = num % 100; 
      uni = num % 10;
      
      if(uni == 1)
      printf ("I");
      else if(uni == 2)
      printf ("II");
      else if(uni == 3)
      printf ("III");
      else if(uni == 4)
      printf ("IV");
      else if(uni == 5)
      printf ("V");
      else if(uni == 6)
      printf ("VI");
      else if(uni == 7)
      printf ("VII");
      else if(uni == 8)
      printf ("VIII");
      else if(uni == 9)
      printf ("IX");
}   

void covertdezenas(int num){
    int dez;
    num = num % 100;
    dez = num /10;
    if(dez > 0 && dez <= 3){
     while(dez > 0 && dez <= 3){
     printf("X");
     dez--; }}
    if(dez == 4)
     printf("XL");
    if(dez >= 5 && dez < 9){
     printf("L");   
     while(dez > 5 && dez < 9){
     printf("X");
     dez--;
    if(dez == 9) 
    printf("XC");
     }
    }
}

void convertcentenas(int num){
    int cen = num /100;
    
    if(cen > 0 && cen <= 3){
     while(cen > 0 && cen <= 3){
     printf("C");
     cen--; }}
    if(cen == 4)
     printf("CD");
    if(cen >= 5 && cen < 9){
     printf("D");   
     while(cen > 5 && cen < 9){
     printf("C");
     cen--;
    if(cen == 9) 
    printf("CM");
     }
    }
}



int main() {
    int num;
    
    printf("Introduza um número entre 1 e 999\n");
    scanf("%d", &num);

    convertcentenas(num); 
    void convertdezenas(int num); 
    convertunidades(num);
    
    printf("\n");
    return 0;   
}