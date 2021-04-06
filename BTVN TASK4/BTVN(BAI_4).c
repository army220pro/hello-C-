#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	float C;/*do C*/
	float F;/*do F*/
	 
	printf("nhap vao do C:");
	scanf("%f",&C);
	
	F=(1.8*C)+32;
	printf("Do F la=%.1f",F);
	
	return 0;
}
