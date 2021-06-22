#include <stdio.h>

 int main()
 {
 int i, j, *p_1, *p_2, **p_p_1, **p_p_2;
 i = 4;
 j = 5;
 p_1 = &i; // value p1 = 1000
 p_2 = &j; // value p2 = 1007 
 p_p_1 = &p_2;  // value p_p_1 = 1053
 p_p_2 = &p_1;   // value p_p_2 = 1030
 }
// ver ficha- tabela

tabela 2
i = 4, *p_2= 5, &i = 1000, **p_p_1 = 5, **p_p_2= 4, &(*p_1) = 1000, j = 5, *p_1 = 4, *(&p_1) = 4;