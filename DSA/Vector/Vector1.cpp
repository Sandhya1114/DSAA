#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector<int>vec(5,0);
    // for(int i=0;i<vec.size();i++){
    //    cout<<vec[i];
    // }
   
    // vector<char>chr={'a','b','c'};
    // for(char val:chr){
    //     cout<<val<<endl;
    // }
    vector<int>vec;
    cout<<"size : "<<vec.size()<<endl;
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(26);
    cout<<"size : "<<vec.size()<<endl;
     for(int val:vec){
        cout<<val<<endl;
    }
    vec.pop_back();

    cout<<"size: "<<vec.size()<<endl;
     for(int val:vec){
        cout<<val<<endl;
    }
    cout<<vec.front();
    cout<<"value of that index : "<<vec.at(1);
    return 0;

}