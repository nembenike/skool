#include <stdio.h>

// Euklédeszi Algoritmus
// Írta: gh (benilol98)

int main() {
  // deklaralok ketto szamot
  int a = 14175;
  int b = 2205;
  
  /* Ez a kod hasznalhato ha user inputot szeretnenk:
  int a, b;
  printf("Adj meg ket szamot: ");
  scanf ("%d %d", &a, &b);*/
  
  // deklaralom a maradekot (remainder)
  int r = a % b;
  
  // while loop amig a maradek nem lesz 0
  while (r != 0){
      // a maradek mindik az a es b maradeka lesz
      r = a % b;
      // az a-t lecserelem b-re es a b-t lecserelem a maradekra
      a = b;
      b = r;
  }
  printf("A legkisebb kozos oszto: %d", a);
}
