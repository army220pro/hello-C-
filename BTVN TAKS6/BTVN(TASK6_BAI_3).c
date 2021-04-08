#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int A;
	int B;
	int C;
	
	printf("So A la:\n");
	scanf("%d",&A);
	
	printf("So B la:\n");
	scanf("%d",&B);
	
	printf("So C la:\n");
	scanf("%d",&C);
	
	if(A>B && A>C){
		printf("Display max is:%d",A);
	}
	else if(B>A && B>C){
		printf("Display max is:%d",B);
	}
	else if(C>A && C>B){
		printf("Display max is:%d",C);
	}
	return 0;
}
