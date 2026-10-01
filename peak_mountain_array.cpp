class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size()-1;
        int i=1,j=n-1;
        int index;
        while(i<=j){
            int mid = i + (j-i)/2;
            if(arr[mid-1]<arr[mid] && arr[mid+1]<arr[mid]){
                index = mid;
                break;
            }
            else if(arr[mid]>arr[mid-1]) i = mid + 1;
            else j = mid - 1;
        }
    return index;
    }
};