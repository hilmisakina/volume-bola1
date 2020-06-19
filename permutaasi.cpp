#include <stdio.h>

int main()
{
	int n,p,x1=1,x2=1,hasil;
	
	printf("Nama     : HILMI Sakina\n");
	printf("npm      : 197006069\n");
	printf("Kelompok : 4\n");
	
	printf("masukan nulai n: ");
	scanf("%d", &n);
	printf("masukan nilai p: ");
	scanf("%d", &p);
	for(int i=1;i<=n;i++)
	{
		x1=x1*i;
	}
	for(int i=1;i<=p;i++)
	{
		x2=x2*i;
	}
	//rumus permutasi//
	hasil=x1/x2;
	printf("Nilai Kombinasi %d di ambil %d adalah %d ",n,p,hasil);
	printf("\n");
	return 0;
}
