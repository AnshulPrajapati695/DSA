#include <iostream>
#include <vector>
using namespace std;

int max(vector<int> arr){
    int max = 0;
    for(int val:arr){
        if(max<val) max = val;
    }
    return max;
}

int sum(vector<int> arr){
    int sum = 0;
    for(int val:arr){
        sum += val;
    }
    return sum;
}

bool isvalid(vector<int> arr,int n,int m,int mid){
    int painter=1 , time=0;
    for(int i=0;i<n;i++){
        if(arr[i] > mid) return false;
        else if((time+arr[i]) <= mid) time += arr[i];
        else {painter++; time = arr[i];}
    }
    return painter > m ? false : true;
}

int painter(vector<int> arr,int n,int m){
    if(m > n){
        return -1;
    }
    int min = max(arr),max = sum(arr);
    int ans = -1;
    while(min<=max){
        int mid = min + (max-min)/2;
        if(isvalid(arr,n,m,mid)) {max = mid - 1; ans = mid;}
        else min = mid + 1;
    }
    return ans;
}

int main(){
    vector<int> arr = {40,30,10,20};
    int n = 4,m = 2;
    cout<<painter(arr,n,m);
    return 0;
}