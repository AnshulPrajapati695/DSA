#include<iostream>
#include<vector>
using namespace std;    

int main(){
    vector<int> arr = {4,1,5,2,3};
    int n = arr.size();
    for(int i=0;i<n-1;i++){
        int min_index = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_index]){
                min_index = j;
            }
        }
        swap(arr[i],arr[min_index]);
    }
    cout<<"Sorted array: ";
    for(int value : arr){
        cout<<value<<" ";
    }
}