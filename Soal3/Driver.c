#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * file;

    char ch;
    int Huruf, Kata, Kalimat;

    /* Membuka File */
    file = fopen("dummy.txt", "r");


    /* Cek File */
    if (file == NULL)
    {
        printf("\nGagal membuka File.\n");
        printf("File tidak ada.\n");

        exit(EXIT_FAILURE);
    }

    /*
     * Logic.
     */
    Huruf = Kata = Kalimat = 0;
    while ((ch = fgetc(file)) != EOF)
    {
    	/* Cek huruf tanpa spasi */
    	if (ch!=' ')
    	{
    		Huruf++;
    	}        

        /* Cek baris baru */
        if (ch == '\n' || ch == '\0')
            Kalimat++;

        /* Cek Kata */
        if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0')
            Kata++;
    }

    /* Kata dan Kalimat terakhir */
    if (Huruf > 0)
    {
        Kata++;
        Kalimat++;
    }

    /* Tampilkan data.*/
    printf("\n");
    printf("Total Huruf\t= %d\n", Huruf);
    printf("Total Kata\t= %d\n", Kata);
    printf("Total Kalimat\t= %d\n", Kalimat);


    /* Close file */
    fclose(file);

    return 0;
}
