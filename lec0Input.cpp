#include<iostream>
using namespace std;
int main(){
    // int x,y;
    // cin>>x>>y;
    // cout<<"value of x is :"<<x<<"value of y is "<<y;
   
    // string str;
    // getline(cin,str);
    // cout<<str;
    int age;
    cin>>age;
    if((age<18) && (age>0)){
        cout<<"not allowed";
    }
    else if(age>=18){
        cout<<"allowed";
    }else{
        cout<<"invalid age";
    };
     return 0;
}