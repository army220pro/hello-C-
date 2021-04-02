#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	float vnd;/*viet nam dong*/
	float usd;/*dola my*/
	float Tiennhanduoc;
	
	printf("nhap so tien usd doi sang vnd\n");
	scanf ("%f",&usd);
	
	Tiennhanduoc=usd*22000;
	printf("Tien nhan duoc la:%.f vnd\n ",Tiennhanduoc);
	
	
	return 0;
}
