#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int a;
	int sotemp;
	int sum=0;
	
	printf("Enter number:\n");
	scanf("%d",&a);
	sotemp=a;
	while(sotemp !=0){
		sum+=sotemp%10;
		sotemp/=10;
	}
	printf("The total is:%d",sum);
	return 0;
}
