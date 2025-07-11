#include<iostream>
#include <climits>
using namespace std;
bool search(int arr[],int n,int key){
    for(int i=0;i<n;i++){
          if (arr[i]==key){
            return 1;
          }
    }
    return 0;

}
int main(){
    int arr[]={2,6,7,9,3,8,9,1};
    int key;
    cout<<"enter key u want to search";
    cin>>key;
    bool found=search(arr,8,key);
    if(found){
        cout<<"key is found ";
    }else{
        cout<<"key is not found";
    }
}