#include<iostream>
#include <climits>
using namespace std;
int getMax(int num[],int n){
    int maxi= INT_MIN;
    for(int i=0;i<n;i++){
        // if(num[i]>max){
        //     max=num[i];
        // }
        maxi=max(maxi,num[i]);
    }
    return  maxi;
     
}
int getMin(int num[],int n){
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(num[i]<min){
            min=num[i];
        }
    }
    return min;
}
int main(){
    // int n=15;
    // int number[15]={2,3};
    // // cout<<"fine"<<endl;
    // // cout<<number[0];
    // for(int i=0;i<n;i++){
    //   cout<<number[i]<<' ';
    // }
    int size;
    cin>>size;
    int num[100];
    for(int i=0;i<size;i++){
        cin>>num[i];
    }
    int maximum=getMax(num,size);
    int minimum=getMin(num,size)
    // int number = swap(maximum,minimum);
    cout<<"max value is"<<getMax(num,size)<<endl;
    cout<<"min value is"<<getMin(num,size)<<endl;
    // cout<<number;
   

}