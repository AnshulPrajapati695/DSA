#include<iostream>
using namespace std;

int binary_search(int arr[],int target,int start,int end){
    if(start<=end){
        int mid = start + (end-start)/2;
        if(target == arr[mid]) return mid;
        else if(target < arr[mid]) return binary_search(arr,target,0,mid-1);
        else return binary_search(arr,target,mid+1,end);
    }
    return -1;
}

int main(){
    int arr[] = {1,2,3,4,5};
    int target = 50;
    int start = 0,end = sizeof(arr)-1;
    cout<<"Recursion : Number is found at index "<<binary_search(arr,target,0,4)<<endl;
    while(start<=end){
        int mid = start + (end - start)/2;
        if (target == arr[mid]) {
            cout<<"Number is found at index "<<mid<<endl;
            break;
        }
        else if (target < arr[mid]) end = mid -1;
        else    start = mid + 1;
    }
    return 0;
}