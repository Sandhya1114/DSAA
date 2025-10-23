#include<iostream>
using namespace std;
int main(){
    /**
     * 

1 2 3 4 5 6 7
1 2 3 4 5 6 
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
     */
    int n;
    cin>>n;
    cout<<endl;
    for(int i=0;i<n;i++){
      for(int j=0;j<n-i;j++){
          cout<<j+1<<' ';
      }
    cout<<endl;
    }
}