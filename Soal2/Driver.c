#include <stdio.h>

int main(int argc, char const *argv[])
{
	int x,y; //Baris dan Kolom
	int i,j,k; //Iterasi
	int jumlah=0;
	printf("Baris = ");
	scanf("%d",&x);
	printf("Kolom = ");
	scanf("%d",&y);

	int M1[x][y]; //Matriks 1
	int M2[x][y]; //Matriks 2
	int M3[x][y]; //Matriks 3


	//Isi Matriks 1
	if (x==y)
	{
		for (i = 0; i < x; ++i)
		{
			for (j = 0; j < y; ++j)
			{
				printf("M1[%d,%d] = ",i,j );
				scanf("%d",&M1[i][j]);
			}
		}

		//Isi Matriks 2
		for (i = 0; i < x; ++i)
		{
			for (j = 0; j < y; ++j)
			{
				printf("M2[%d,%d] = ",i,j );
				scanf("%d",&M2[i][j]);
			}
		}

		//Perkalian Matriks
		for (i = 0; i < x; ++i)
		{
			for (j = 0; j < x; ++j)
			{
				for (k = 0; k < y; ++k)
				{
					jumlah=jumlah+M1[i][k]*M2[k][j];
				}
				M3[i][j]=jumlah;
				jumlah=0;
			}
		}

		//Hasil Perkalian
		printf("\nHasil:\n");
		for (i = 0; i < x; ++i)
		{
			for (j = 0; j < y; ++j)
			{
				printf("M3[%d,%d] = %d\n",i,j,M3[i][j] );
			}
		}
	}
	return 0;
}
