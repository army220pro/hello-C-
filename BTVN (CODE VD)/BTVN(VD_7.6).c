#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main()
{
	int x;
	x=0;
	clrscr();
	
	printf("Enter Choice (1-3):");
	scanf("%d",&x);
	
	if(x == 1)
	 printf("\nChoice is 1");
	else if (x == 2)
	 printf("\nChoice is 2");
	else if (x == 3)
	 printf("\nChoice is 3");
	else 
	     printf ("\nInvalid Choice: Invalid Choice");
		    
}
