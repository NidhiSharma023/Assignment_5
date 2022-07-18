#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n;
    printf("First N natural numbers in reverse order:");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
        printf("%d\n",i);
    getch();
    return 0;
}




