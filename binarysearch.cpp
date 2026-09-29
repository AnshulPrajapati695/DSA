#include<iostream>
using namespace std;

int binary_search(int arr[],int target,int start,int end){
    int mid = (start+end)/2;
    if(target == arr[mid]) return mid;
    else if(target < arr[mid]) return binary_search(arr,target,0,mid);
    else return binary_search(arr,target,mid+1,end);
}

int main(){
    int arr[] = {1,2,3,4,5};
    int target = 5;
    cout<<"Number is found at index "<<binary_search(arr,target,0,4)<<endl;
    return 0;
}