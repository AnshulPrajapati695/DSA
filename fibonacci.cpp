// class Solution {
// public:
//     int fib(int n) {
//         if(n==0 || n==1) return n;
//         return fib(n-1)+fib(n-2);
//     }
// };
#include<iostream>
using namespace std;

bool isSort(int arr[],int n){
    if(n==0 || n==1) return true;
    return arr[n-2]<=arr[n-1] && isSort(arr,n-1);
}

bool BS(int arr[],int st,int end,int target){
    if(st>end) return false;
    int mid = st+(end-st)/2;
    if(arr[mid]==target) return true;
    else if(arr[mid]>target) return BS(arr,st,mid-1,target);
    else return BS(arr,mid+1,end,target);
}

int main(){
    int arr[] = {1,2,9,4,5};
    cout<<BS(arr,0,4,10);
    return 0;
}