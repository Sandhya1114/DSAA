// #include<iostream>
// using namespace std;
// int binarySearch(int arr[],int size,int key){
//     int start=0;
//     int end=size-1;
//     // int mid =(start+end)/2;
//     int mid=start+(end-start)/2;
//     while(start<=end){
//         if(arr[mid]==key){
//             return mid;
//         }
//         if(key>arr[mid]){
//             start=mid+1;
//         }
//         else{
//             end=mid-1;
//         }
//         // mid=(start+end)/2;
//         mid=start+(end-start)/2;
//     }
//     return -1;
// }
// int main(){
//       int even[4]={2,4,6,8} ;
//       int odd[5]={1,3,5,7,9} ;
//       int evenIndex=binarySearch(even,4,20);
//       cout<<"index of 20 is:"<<evenIndex<<endl;
//       int oddIndex=binarySearch(odd,5,23);
//       cout<<"index of 20 is:"<<oddIndex<<endl;
//       return 0;
// }
#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start <= end) {
        if (arr[mid] == key) {
            return mid;
        }
        if (key > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main() {
    int even[4] = {2, 4, 6, 8};
    int odd[5] = {1, 3, 5, 7, 9};

    int evenIndex = binarySearch(even, 4, 20);
    cout << "index of 20 is: " << evenIndex << endl;

    int oddIndex = binarySearch(odd, 5, 23);
    cout << "index of 23 is: " << oddIndex << endl;

    return 0;
}
