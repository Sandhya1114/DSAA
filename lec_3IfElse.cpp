// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"enter a num" <<endl;
//     cin>>a;
//     // cout<<"number is a "<<a<<endl;
//     if(a>0){
//       cout<<"a is postive";
//     }
//     else{
//         cout<<"a is negative";
//     }
// }
#include<iostream>
using namespace std;

int main(){
    int a;
    cout << "Enter a number: " << endl;
    cin >> a;

    // Optional: Show the number entered
    // cout << "Number is " << a << endl;

    if(a > 0){
        cout << "a is positive";
    }
    else{
        cout << "a is negative";
    }

    return 0;
}
