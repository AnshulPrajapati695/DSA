class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int i=0,j=n-1;
        int el;
        if(n==1){
                el = nums[0];
        }
        else{
            while(i<=j){
                
                int mid = i + (j - i)/2;
                if(mid==0 && nums[mid]!=nums[1]){
                    el = nums[mid];
                    break;
                }
                if(mid==n-1 && nums[mid]!=nums[mid-1]){
                    el = nums[mid];
                    break;
                }
                if(nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1]){
                    el = nums[mid];
                    break;
                }
                //even
                if(mid%2==0){
                    if(nums[mid]==nums[mid-1]) j = mid-1;
                    else i = mid+1;
                }
                //odd
                else{
                    if(nums[mid]==nums[mid-1]) i = mid+1;
                    else j = mid-1;
                }
            }
        }
        return el;
    }
};