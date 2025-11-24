// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         int n = nums.size();
//         k %= n;  
        
//         reverse(nums.begin(), nums.end());
//         reverse(nums.begin(), nums.begin() + k);
//         reverse(nums.begin() + k, nums.end());
//     }
// };

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int replaceByOne(vector<int>& arr,int n){
      int temp=arr[0];
      for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
      }
      arr[n-1]=temp;
     
}
int main(){
    int n;
    cin>>n;
    vector<int>vec(n,0);
   for(int i=0;i<n;i++){
      cin>>vec[i];
   }
    replaceByOne(vec,n);
     for(int val:vec){
      cout<<val<<endl;
    }

}