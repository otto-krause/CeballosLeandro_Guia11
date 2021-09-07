#include <stdio.h>
void pre (float a)
{ printf("La presion sobre la superficie es:%f\n", a); }
int main ()
{ int f,s; scanf("%i %i", &f, &s); float p=(float)f/(float)s; pre(p); return 0; }
