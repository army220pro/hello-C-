#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int a; /* diem mon toan*/
	int b; /* diem mon van*/
	int c; /* diem mon anh*/
	int sum; /*tong diem 3 mon */
	int trung_binh_mon; 
	
	printf("nhap diem mon toan \n");
	scanf("%d", &a);
	
	printf("nhap diem mon van \n");
	scanf("%d", &b);
	
	printf("nhap diem mon anh \n");
	scanf("%d",&c);
	
	sum= a+b+c;
	printf("Sum is %d \n",sum);
	
	trung_binh_mon= sum/3;
	printf("trung binh mon=%d",trung_binh_mon);
	return 0;
}
