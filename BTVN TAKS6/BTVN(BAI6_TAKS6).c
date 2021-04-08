#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int a;
	int b;
	int c;
	
	printf("so a la:\n");
	scanf("%d",&a);
	
	printf("so b la:\n");
	scanf("%d",&b);
	
	printf("so c la:\n");
	scanf("%d",&c);

  if(a<b+c && b<a+c && c<a+b){
  		printf("La tam giac vuong\n");
       if(a*a==b*b+c*c)
       	printf("a la canh huyen\n");
       else if (b*b==a*a+c*c)
        printf("b la canh huyen\n");
       else 
	   	printf("c la canh huyen");
  } 
  else 
	  printf("Khong la tam giac vuong");   
	return 0;
}
