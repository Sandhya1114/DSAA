#include<iostream>
using namespace std ;
void reverse(int arr[],int n){
   int start =0;
   int end =n-1;
   while(start<=end){
    swap(arr[start],arr[end]);
    start++;
    end--;
   }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[6]={1,-5,4,3,9,8};
    int brr[5]={3,9,2,8,1};
     reverse(arr,6);
     reverse(brr,5);
     printArray(arr,6);
     printArray(arr,5);
}