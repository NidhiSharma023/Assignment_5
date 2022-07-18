#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=n;i>=1;i=i-2)
    {
        printf("%d\n",i-1);
    }
    getch();
    return 0;
}

