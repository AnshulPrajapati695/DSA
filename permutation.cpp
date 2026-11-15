// class Solution {
// public:
//     void getPer(vector<int>& nums,int idx,vector<vector<int>>& ans){
//         int n = nums.size();
//         if(idx==n){
//             ans.push_back(nums);
//             return;
//         }
//         for(int i=idx;i<n;i++){
//             swap(nums[idx],nums[i]);
//             getPer(nums,idx+1,ans);
//             swap(nums[idx],nums[i]);
//         }
//     }
//     vector<vector<int>> permute(vector<int>& nums) {
//         vector<vector<int>> ans;
//         getPer(nums,0,ans);
//         return ans;
//     }
// };

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void printPer(vector<char>& nums,int idx){
    if(idx==nums.size()){
        for(char val:nums) cout<<val<<" ";
        cout<<endl;
    }
    for(int i=idx;i<nums.size();i++){
        swap(nums[idx],nums[i]);
        printPer(nums,idx+1);
        swap(nums[idx],nums[i]);
    }
}

int main(){
    vector<char> nums = {'a','b','c'};
    printPer(nums,0);
    return 0;
}