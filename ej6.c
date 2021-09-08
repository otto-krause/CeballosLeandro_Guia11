#include <stdio.h>
void octa (float a, int b)//Solo muestra valor.
{ printf("La octava parte de %i es: %f\n", b,a); }
int main ()
{ int n; scanf("%i", &n); float o=(float)n/8; octa(o,n); return 0; }
