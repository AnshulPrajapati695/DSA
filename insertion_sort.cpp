#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {5,1,4,2,8};
    int n = arr.size();
    for(int i=1;i<n;i++){
        int curr = arr[i];
        int pre = i-1;
        while(pre>=0 && arr[pre]>curr){
            arr[pre+1] = arr[pre];
            pre--;
        }
        arr[pre+1] = curr;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}