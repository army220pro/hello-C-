#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int arr[10];
	int i;
	int max;
	int min;
	
	for(i=0;i<10;i++){
		printf("nhap phan tu thu [%d]:",i);
		scanf("%d",&arr[i]);
	}
	
	
	
	min = arr[0];
	
	for(i=0;i<10;i++){
		if (arr[i]<min)
           min = arr[i];
	}
	printf("phan tu nho nhat trong mang la:%d\n",min);
	
	
	max = arr[0];
	
	for (i=0;i<10;i++){
		if(arr[i]>max)
		   max = arr[i];
	}
	printf("phan tu lon nhat trong mang la:%d",max);
 return 0;
}
    
