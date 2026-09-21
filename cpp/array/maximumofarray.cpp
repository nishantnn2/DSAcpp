#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array:";
    cin>>n;
    cout<<"enter the numbers of array:";
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    for(int i=1;i<=n-1;i++){
        if(max<arr[i]) 
        max=arr[i];
    }
    cout<<"the maximum number in given  array is: "<<max;
}