#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int a;/* diem mon toan */
	int b;/* diem mon ly */
	int c;/* diem mon hoa */
	int sum ; /* tong diem ba mon */
	int z;/* diem trung binh mon */
	
	printf("nhap diem mon toan \n");
	scanf("%d", &a);
	
	printf("nhap diem mon ly \n");
	scanf("%d", &b);
	
	printf("nhap diem mon hoa \n");
	scanf("%d", &c);
	
	sum=a+b+c;
	printf("sum la %d \n",sum);
	
	z=sum/3;
	printf("diem trung binh mon=%d",z);
	return 0;
}
