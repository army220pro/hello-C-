#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	float S;/* Dien tich hinh tron*/
	float C;/* Chu vi hinh tron*/
	int R;/* Ban kinh hinh tron*/
	float PI=3.14;
	
	printf("Nhap ban kinh hinh tron\n");
	scanf("%d", &R);

	C=2*R*PI;
	printf("Chu vi hinh tron la: %f\n",C);
	
	S=PI*R*R;
	printf("Dien tich hinh tron la: %f\n",S);
	return 0;
}
