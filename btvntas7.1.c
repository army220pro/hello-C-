#include <stdio.h>
#include <stdlib.h>
#define MAX 50
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
    // khai bao mang a co n phan tu
    int n , i, s = 0;
    int a[10];
 
    // thuc hien nhap tung phan tu mang
    for (i = 0; i < n; i++) 
    {
        printf("Nhap a[%d] = ", i);
        scanf("%d", &a[i]);
    }
 
    // thuc hien in cac phan tu cua mang ra man hinh
    printf("\nMang da nhap o vi tri chan la:\n");
    for (i = 0; i < 10; i++) 
    {
        printf ("a[%d]=%d \t",i++,a[i]);
       
       
    }
    }




