#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int a ;/*a la mot so nguyen*/
	
	printf("nhap mot so nguyen:\n");
	scanf("%d",&a);
	
	if(a%2==0){
		printf("%d la so chan",a);
	}
	else{
		printf("%d la so le",a);
	}
		
	return 0;
}
