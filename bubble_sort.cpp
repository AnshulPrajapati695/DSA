#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {4,1,5,2,3};
    int n = arr.size();
    bool is_swap = false;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                is_swap = true;
            }
        }
        if(!is_swap) break;
    }
    cout<<"Sorted array: ";
    for(int value : arr){   
        cout<<value<<" ";
    }
}