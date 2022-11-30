#include<stdio.h>
int main()
{
    int x, star,space,n,row;
    printf("enter the number of row");
    scanf("%d",&n);
    x=2*n-2;
    for(row=1;row<=n;row++)
    {
        for(star=1;star<=row;star++)
        printf("*");
        for(space=1;space<=x;space++)
        printf(" ");
        for(star=1;star<=row;star++)
        printf("*");
        x=x-2;
        printf("\n");
    }
    
}
/*

*          *
**        **
***      ***
****    ****
*****  *****
************





*/
