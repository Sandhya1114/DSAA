#include <iostream>
using namespace std;
int main(){
    /*
    * * * * * *
    * * * * * *
    * * * * * *
    * * * * * *
    * * * * * * 
    * * * * * *
    */
    int n;
    cout<<"enter the no of rows u want";
    cin>>n;
    cout<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<"*"<<' ';
        }
        cout<<endl;
    }
}