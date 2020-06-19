#include <stdio.h>
main () {

float PHI = 3.14;
float jari, volume;


printf("Nama     : HILMI Sakina\n");
printf("npm      : 197006069\n");
printf("Kelompok : 4\n");

printf("Masukan Jari-Jari Lingkaran : ");
scanf("%f", &jari);

volume =1/4*PHI*jari*jari;
printf("volume : %f", volume);

return 0;
}
