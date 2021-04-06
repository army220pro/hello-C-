#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() 
{
	char c;
	printf("Please enter a character: ");
	scanf("%c",&c);
	
	if(c>='A'&&c<='z') 
	 printf ("Lowercase character = %c",c+'a'-'A');
	else
	printf("Character Entered is=%c",c); 
	 
}
