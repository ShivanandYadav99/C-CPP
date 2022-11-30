#include<stdio.h>
void main()
{
    int row,n,star,space,col;
    printf("enter the number of row");
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        if(row==1||row==n)
        {
            for(star=1;star<=n;star++)
            printf("*");
            printf("\n");
        }
        else
        {
          printf("*");
          for(space=1;space<=n-2;space++)
          printf(" ");
          printf("*");
          printf("\n");   
        }
    }
}

/*
********
*      *
*      *
*      *
*      *
*      *
*      *
********





*/
