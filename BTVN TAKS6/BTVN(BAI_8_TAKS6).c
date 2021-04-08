#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	float a;
	float b;
	float c;
	float delta=b*b-4*a*c;
	float x1;/* nghiem thu nhat cua phuong trinh*/
	float x2;/* nghiem thu hai cua phuong trinh*/
	
    printf("cho phuong trinh ax^2+bx+c=0\n");
    
    printf("a la:\n");
    scanf("%f",&a);
    
    printf("b la:\n");
    scanf("%f",&b);
    
    printf("c la:\n");
    scanf("%f",&c);
    
    printf("phuong trinh la: %.fx^2+%.fx+%.f=0\n",a,b,c);
    
    delta= b*b-4*a*c;
    printf("Delta la:%.f\n",delta);
    
    if(b*b-4*a*c>0){
    	x1=(-b+sqrt(b*b-4*a*c))/2*a;
    	x2=(-b-sqrt(b*b-4*a*c))/2*a;
    	printf("Phuong trinh co 2 nghiem phan biet\n x1=%f\n x2=%f\n",x1,x2);	
	}
	else if (b*b-4*a*c<0){
		printf("Phuong trinh vo nghiem\n");	
	}
	else 
        printf("Phuong trinh co nghiem kep x1=x2:");
	return 0;
}
