// display this ap-1,3,5,7,9... upto n. 
//  or any series.

#include<iostream>
using namespace std;
int main(){
    int a,d,n;
    cout<<"enter n:";
    cin>>n;
    cout<<"enter d:";
    cin>>d;
    cout<<"enter a:";
    cin>>a;
    for(int i=1;i<=n;i++){
        cout<<a<<endl;
        a=a+d;

    }

}