#include<iostream>
using namespace std;
int main(){
    /**
     * 


          1 
        2 2 2
      3 3 3 3 3
    4 4 4 4 4 4 4
  5 5 5 5 5 5 5 5 5
     */
    int n;
    cin>>n;
    cout<<endl;
    for(int i=0;i<n;i++){
      for(int j=0;j<n-i;j++){
          cout<<' '<<' ';
      }
      for(int k=0;k<i+(i-1);k++){
        cout<<i<<" ";
      }
    cout<<endl;
    }
}