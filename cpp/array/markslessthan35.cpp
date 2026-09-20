#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of students:";
    cin>>n;
    cout<<"enter the marks:";
    int arr[n];
//input
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
//output
    for(int i=0;i<=n-1;i++){
        if(arr[i]<=35) cout<<i<<endl;
    }
}