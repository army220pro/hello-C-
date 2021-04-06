#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int a;/* day nho cua hinh thang */
	int b;/* day lon cua hinh thang */
	int h;/* chieu cao cua hinh thang*/
	int S;/* dien tich hinh thang*/
	
	printf("Day nho cua hinh thang:\n");
	scanf("%d",&a);
	
	printf("Day lon cua hinh thang:\n");
	scanf("%d",&b);
	
	printf("Chieu cao cua hinh thang:\n");
	scanf("%d",&h);
	
	S=((a+b)/2)*h;
	printf("Dien tich cua hinh thang la:%d",S);
	return 0;
}
