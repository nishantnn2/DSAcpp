#include<iostream>
using namespace std;
int main(){
    int arr[]={1,3,42,34,56,42,1,3,4,56,7};
    int size =sizeof (arr)/sizeof (arr[0]);
    cout<<size;
}