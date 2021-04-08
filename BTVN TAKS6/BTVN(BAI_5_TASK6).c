#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	char Dapan;
	
	printf("\t\t\t\t\t\t\tMENU\n");
	printf("Ban chon mon hoc nao\n");
	printf("1. CF\n");
	printf("2. C\n");
	printf("3. HDJ\n");
	printf("4. DreamWeaver\n");
	printf("5. RDBMS\n");
	printf("6. Learn Java By Example\n");
	printf("Dap an ban chon la:");
	scanf("%c",&Dapan);
	
	switch(Dapan)
	{
		case '1':
			printf("Ban chon mon CF");
			break;	
		case '2':
			printf("Ban chon mon C");
			break;
		case '3':
			printf("Ban chon mon HDJ");
			break;
		case '4':
		    printf("Ban chon mon DreamWeaver");
			break;
		case '5':
		    printf("Ban chon mon RDBMS");
			break;
		case '6':
		    printf("Ban chon mon Learn Java By Example");
			break;	
		
		default:
		    printf("Moi ban chon lai!!");			
	}     
	
	return 0;
}
