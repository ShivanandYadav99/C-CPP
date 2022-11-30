#include<stdio.h>
void main()
{
    int row,n,star,space,x=1,y;
    printf("enter the number of row");
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        for(space=1;space<=n-row;space++)
        printf("*");
        for(star=1;star<=x;star++)
        printf(" ");
         for(space=1;space<=n-row;space++)
        printf("*");
        printf("\n");
        x=x+2;
    }
    y=2*n-3;
    for(row=1;row<=n-1;row++)
    {
        for(space=1;space<=row;space++)
        printf("*");
        for(star=1;star<=y;star++)
        printf(" ");
         for(space=1;space<=row;space++)
        printf("*");
        printf("\n");
        y=y-2;
    }

}

/*


**** ****
***   ***
**     **
*       *

*       *
**     **
***   ***
**** ****





*/
