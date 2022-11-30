#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number "<<endl;
    cin>>n;
    for(int row=0;row<n;row++){
        for(int star=n-row;star>=1;star--){
            cout<<" * ";
        }
        cout<<endl;
    }
}

/*
    *  *  *  *  * 
    *  *  *  * 
    *  *  * 
    *  * 
    * 

*/
