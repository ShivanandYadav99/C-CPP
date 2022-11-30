#include<iostream>
using namespace std;
int main()
{
    int n,x=1;
    cout<<"enter number of  row";
    cin>>n;
    for(int row=1;row<=n;row++)
    {
        for(int space=1;space<=n-row;space++)
        printf(" ");
        for(int star=1;star<=x;star++)
        cout<<"*";
        cout<<endl;
        x=x+2;
    }
    
}
/*

                       *
                      ***
                     *****
                    *******
                   *********




*/
