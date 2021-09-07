#include <stdio.h>
void jeff (int h, int m)
{ printf("El porcentaje de hombres postulados son:%i\nEl porcentaje de mujeres postuladas son:%i\n", h,m); }
int main ()
{ int nh,nm; scanf("%i %i", &nh, &nm); int t=nh+nm, ph=nh*100/t, pm=nm*100/t; jeff(ph,pm); return 0; }
