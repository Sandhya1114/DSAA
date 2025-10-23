#include<iostream>
using namespace std;
int main(){
    /**
     * 

* * * * * * *
* * * * * * 
* * * * *
* * * *
* * *
* *
*
1
     */
    int n;
    cin>>n;
    cout<<endl;
    for(int i=0;i<n;i++){
      for(int j=0;j<n-i;j++){
          cout<<'*'<<' ';
      }
    cout<<endl;
    }
}