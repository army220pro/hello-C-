#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	float V;/* The tich hinh tru*/
	int r;/* Ban kinh hinh tru*/
	int h;/* Chieu cao hinh tru*/
	float PI=3.14;
	
	printf("Nhap ban kinh hinh tru:\n");
	scanf("%d",&r);
	
	printf("Nhap chieu cao hinh tru:\n");
	scanf("%d",&h);
	
	V=h*PI*r*r;
	printf("The tich cua hinh tru la:%.2f",V);
	
	return 0;
}
