#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=2;i<=n;i=i+2)
    {
        printf("%d\n",i);
    }
    getch();
    return 0;
}


