#include<stdio.h>
#include<conio.h>
#include<string.h>
 
int main()
{
    char s[100];
    printf("Nhap vao 1 chuoi: \n");
    fflush(stdin);
    gets(s);
    
    int a=strlen(s);
    for(int i=0;i<a;i++){
		 if(s[i]>=65&&s[i]<=90)
           s[i]=s[i]+32;
    }
    printf("\nChuoi sau khi thay doi la: %s",s);
    getch();
    return 0;
}
