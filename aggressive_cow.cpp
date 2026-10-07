#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

bool isvalid(vector<int> &arr,int n,int c,int mid){
   int cow = 1,last = arr[0];
   for(int i=1;i<n;i++){
    if((arr[i] - last) >= mid) {cow++; last = arr[i];}
    if(cow == c) return true;
    }
    return false;
}

int cow(vector<int> &arr,int n,int c){
    sort(arr.begin(),arr.end());
    if(c>n) return -1;
    int min = 1,max = arr[n-1] - arr[0],ans = -1;
    while(min<=max){
        int mid = min + (max-min)/2;
        if(isvalid(arr,n,c,mid)) { min = mid+1; ans = mid;}
        else max = mid - 1;
    }
    return ans;
}
int main(){
    vector<int> arr = {1,2,8,4,9};
    int c = 3,n = 5;
    cout<<cow(arr,n,c);
}