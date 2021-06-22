#include <stdio.h>
int main() {
      int XOR, P, Q, AND, OR, NAND, NOR;
      
      P = 0, Q = 0;
      
      printf("P  Q  AND  OR  NAN  NOR  XOR\n");
     OR = P || Q;
      AND = P && Q;
      NAND = !(P && Q);
      NOR = !(P || Q);
        if(P != Q)
        XOR = 1;
        else
        {
              XOR = 0;
        }
     if(P == 0 && Q == 0)
      printf("%d  %d   %d    %d    %d   %d   %d\n",  P, Q, AND, OR, NAND, NOR, XOR);
     
      Q++;
      OR = P || Q;
      AND = P && Q;
      NAND = !(P && Q);
      NOR = !(P || Q);
        if(P != Q)
        XOR = 1;
        else
        {
            XOR = 0;
        }
     if(P == 0 && Q == 1)
      printf("%d  %d   %d    %d    %d   %d   %d\n", P, Q, AND, OR, NAND, NOR, XOR);

      P++; Q--;
      OR = P || Q;
      AND = P && Q;
      NAND = !(P && Q);
      NOR = !(P || Q);
        if(P != Q)
        XOR = 1;
        else
        {
            XOR = 0;
        }
     if(P == 1 && Q == 0)
      printf("%d  %d   %d    %d    %d   %d   %d\n",  P, Q, AND, OR, NAND, NOR, XOR);
      
      Q++;
      OR = P || Q;
      AND = P && Q;
      NAND = !(P && Q);
      NOR = !(P || Q);
        if(P != Q)
        XOR = 1;
        else
        {
            XOR = 0;
        }
     if(P == 1 && Q == 1)
      printf("%d  %d   %d    %d    %d   %d   %d\n", P, Q, AND, OR, NAND, NOR, XOR);

      return 0;
      
}