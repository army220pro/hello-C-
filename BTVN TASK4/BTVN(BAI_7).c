#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int a;/* mot canh cua hinh vuong*/
	int S;/*dien tich hinh vuong */
	int C;/*chu vi hinh vuong*/
	
	printf(" nhap vao canh cua hinh vuong:");
	scanf("%d",&a);
	
	S=a*a;
	printf("Dien tich hinh vuong la:%d\n",S);
	
	C=4*a;
	printf("Chu vinh hinh vuong la:%d\n",C);
	return 0;
}
