#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int a;/*chieu dai day tam giac*/
	int h;/*duong cao tam giac*/
	int S;/*dien tich tam giac*/
	
	printf("nhap vao chieu dai day tam giac\n");
	scanf("%d",&a);
	
	printf("nhap vao duong cao tam giac\n");
	scanf("%d",&h);
	
	S=a*h/2;
	printf("dien tich hinh tam giac la:%d",S);
	
	return 0;
}
