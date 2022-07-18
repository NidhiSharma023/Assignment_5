#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n;
    printf("First N odd natural numbers:");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+2)
        printf("%d\n",i);
    getch();
    return 0;
}





