// composite number.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    for(int i=1;i<n/2;i++){
        if(n%i==0){
            cout<<"composite";
            break;
        }
    }

}