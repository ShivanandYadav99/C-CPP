#include<stdio.h>
int main()
{
    int row,n,star,space,x,y;
    printf("enter the any + number");
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
      y=0;
      for(row=1;row<=n;row++)
      {
      for(star=1;star<=n+1-row;star++)
      printf("*");
      for(space=1;space<=y;space++)
      printf(" ");
      for(star=1;star<=n+1-row;star++)
      printf("*");
      y=y+2;
      printf("\n");
      }
}

/*

*              *
**            **
***          ***
****        ****
*****      *****
******    ******
*******  *******
****************
****************
*******  *******
******    ******
*****      *****
****        ****
***          ***
**            **
*              *






*/
