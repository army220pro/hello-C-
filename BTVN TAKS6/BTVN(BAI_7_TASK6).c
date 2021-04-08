#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int num1;
	int num2;

	printf("num1 la:\n");
	scanf("%d",&num1);
	
	printf("num2 la:\n");
	scanf("%d",&num2);
	
	if(num1%num2)
	{
		printf("num1 la uoc cua num2\n");}
	else if(num2%num1){
	    printf("num2 la uoc cua num1\n");	
	}
	else 
        printf("nhap sai vui long nhap lai!");
	return 0;
}
