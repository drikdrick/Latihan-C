#include <stdio.h>

float convertUS(float x){
	float z = x/13757;
	return z;

}
float convertAU(float x){
	float z = x/10457;
	return z;
}
float convertYen(float x){
	float z = x/107;
	return z;
}
float convertEuro(float x){
	float z = x/15125;
	return z;
}

int main(int argc, char const *argv[])
{
	float a;
	int x,y,z;

	while(1==1){
		printf("\n\n======Converting Rupiah======\n");
		printf("Entri Total Rupiah to Convert: ");
		scanf("%f",&a);

		printf("Menu\n");
		printf("1. US$\n");
		printf("2. AU$\n");
		printf("3. Yen\n");
		printf("4. Euro\n");
		printf("5. Wrong Input\n");
		printf("6. Exit\n");


		label:
		printf("Choice : ");
		scanf("%d",&y);

		switch(y){
			case 0: break;
			case 1: printf("Result: %.2f",convertUS(a));
			break;
			case 2: printf("Result: %.2f",convertAU(a));
			break;
			case 3: printf("Result: %.2f",convertYen(a));
			break;
			case 4: printf("Result: %.2f",convertEuro(a));
			break;
			case 5: break;
			case 6: printf("\nSee you!"); exit(0);
			break;
			default: printf("Wrong Choice! Try Again!\n");
					goto label;
		}
	}
	return 0;
}
