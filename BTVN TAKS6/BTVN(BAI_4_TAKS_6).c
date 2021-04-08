#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	char kytu;
	
	printf("nhap ky tu:\n");
	scanf("%c",&kytu);
	
	if((kytu>='a' && kytu<='z')||(kytu>='A' && kytu<='Z')){
		switch(kytu)
		{
			case'a':
			case'A':
			case'e':
			case'E':
			case'i':
			case'I':
			case'o':
			case'O':
			case'u':
			case'U':
			printf("La ky tu thuoc ALPHABET\n");
			printf("La nguyen am\n");
			break;
		default:
		   printf("La ky tu thuoc ALPHABET\n");	 
		   printf("La phu am\n");		
		}
	}
	else
	  printf("Khong thuoc ALPHABET"); 
	return 0;
}
