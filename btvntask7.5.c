#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int arr[4][3];
	int i,j;
	double tong=0;
	
    for(i=0;i<4;i++){
    	for(j=0;j<3;j++){
    		printf("nhap diem thu [%d][%d]:",i,j);
    		scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			printf("%d ",arr[i][j]);
			
	    }
	printf("\n");
	
    }
    printf("tong diem bang:\n");
    for(i=0;i<4;i++){
    	for(j=0;j<3;j++){
    	    tong += arr[i][j];	
		}
	}
	return tong;
}
