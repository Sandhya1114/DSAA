#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    // int i=1;
    int sum=0;
    // while(i<n){
    //     cout<<i<<endl;
    //     i++;
    // }
    // while(i<=n){
    //     sum=sum+i;
    //     i++;
    // }
    // cout<<sum<<endl;
    // while(i<=n){
    //     if(i%2==0){
    //         sum=sum+i;
    //         i++;
    //     }else{
    //         i++;
    //     }
    // }
    // cout<<sum<<endl;
    int i=2;
    while(i<n){
        if(n%i==0){
            cout<<"not a prime num"<<i<<endl;
          
        }else{
            cout<<"prime num"<<i<<endl;

        }
          i++;
    }
}