#include<iostream>
using namespace std;
int main(){
    int n,x;
    cout<<"enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"enter the numbers:";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    cout<<"enter the number to check:";
    cin>>x;
    bool flag=false;
    for(int i=0;i<=n-1;i++){
        if(arr[i]==x) {
        cout<<"number is present in array list";
        flag=true;
        break;
        }    
    }
    if(flag==false){ 
        cout<<"number is not present in array list";
    }
    return 0;


}