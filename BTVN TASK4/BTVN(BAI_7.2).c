#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int a;/* chieu dai hinh chu nhat*/
	int b;/*chieu rong hinh chu nhat*/
	int S;/* dien tich hinh chu nhat*/
	int C;/* chu vi hinh chu nhat*/
	
	printf("Nhap vao chieu dai hinh chu nhat:\n");
	scanf("%d",&a);
	
	printf("Nhap vao chieu rong hinh chu nhat:\n");
	scanf("%d",&b);
	
	S=a*b;
	printf("Dien tich hinh chu nhat la:%d\n",S);
	
	C=2*(a+b);
	printf("Chu vi hinh chu nhat la:%d",C);
	
	return 0;
}
