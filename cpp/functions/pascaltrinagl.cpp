#include<iostream>
using namespace std;
int fact(int g){
    int ans=1;
    for(int i=g;i>=1;i--){
        ans=ans*i;
    }
    return ans;
}
int main(){
    int n;
    cout<<"enter no: ";
        cin>>n;
        for(int i=0;i<=n;i++){
            for(int j=0;j<=i;j++){
                int a=fact(i);
                int b=fact(i-j);
                int c=fact(j);
                int x=a/(b*c);
                cout<<x<<" ";
            }
            cout<<endl;

        }
}