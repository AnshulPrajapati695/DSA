#include<iostream>
using namespace std;

void rev_arr(int arr[],int size){
    int left=0;
    int right=size-1;
    while (left<right){
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
    
}
int main(){
    int arr[5] = {1,2,3,4,5};
    rev_arr(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    //input and output in array
    // int marks[5];
    // int sz = sizeof(marks)/sizeof(int);
    
    // for(int i=0;i<sz;i++){
    //     cin>>marks[i];
    // }
    // for(int i=0;i<sz;i++){
    // cout<<marks[i]<<endl;
    // }

    // //min and max
    // int num[5] = {5,12,1,56,-98};
    // int small = INT16_MAX;
    // int large = INT16_MIN;
    // int min_idx,max_idx;
    // for(int i=0;i<5;i++){
    //     small = min(num[i],small);
    //     large = max(num[i],large);
    //     if(small == num[i]) min_idx = i;
    //     if(large == num[i]) max_idx = i;
    // }
    // cout<<"smallest number : "<<small<<" at index "<<min_idx<<endl;
    // cout<<"largest value : "<<large<<" at index "<<max_idx<<endl;

    // //linear search
    // int arr[5] = {1,2,3,4,5};
    // int target = 0;
    // int found = 0;
    // for(int i=0;i<5;i++){
    //     if(target == arr[i]){
    //         cout<<"element found at index "<<i<<endl;
    //         found = 1;
    //     }
    // }
    // if(found == 0){
    //     cout<<"Element not found!";
    // }

    // //reverse array
    // for(int i = 4;i>=0;i--){
    //     cout<<arr[i]<<endl;
    // }
   
    return 0;
}