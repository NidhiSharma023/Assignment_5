#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d=%d\n",i,i*i*i);
    }
    getch();
    return 0;
}

