#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	char kytu;
	
	printf("nhap vao mot ky tu:\n");
	scanf("%c",&kytu);
	
	if(kytu>='a' && kytu<='z'){
	 printf("la ky tu ALPHABET in thuong");
}
	else if(kytu>='A' && kytu<='Z'){
	 printf("La ky tu ALPHABET in hoa");
}   
    else if(kytu>='0' && kytu<='9'){
     printf("ky tu la so");	
	}
    else 
     printf(" Khong la ky tu ALPHABET");
	return 0;
}
