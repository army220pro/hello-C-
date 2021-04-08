#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int a;
	int b;
	int c;
	
	printf("So a la:\n");
	scanf("%d",&a);
	
	printf("So b la:\n");
	scanf("%d",&b);
	
	printf("So c la:\n");
	scanf("%d",&c);
	
	if(a>b>c){
		printf("Thu tu tang dan la:%d>%d>%d",a,b,c);
	}
	else 
	    printf("vui long nhap lai!!");;
	return 0;
}
