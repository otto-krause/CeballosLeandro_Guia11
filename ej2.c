#include <stdio.h>
void pra (int p, int a)
{ printf("El area es %i\nEl perimetro es %i\n", a,p); }
int main ()
{ int c,d; scanf("%i %i", &c, &d); int pe=2*c+2*d, ar=c*d; pra(pe,ar); return 0; }
