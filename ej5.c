#include <stdio.h>
void ohm (int t, int ra, int rb, int rc, int rd, int rf)
{ printf("La resistencia total de: %i - %i - %i - %i - %i es\n%i\n", ra,rb,rc,rd,rf,t); }
int main ()
{ int r1,r2,r3,r4,r5; scanf("%i %i %i %i %i", &r1, &r2, &r3, &r4, &r5); int rt=r1+r2+r3+r4+r5; ohm(rt,r1,r2,r3,r4,r5); return 0; }
