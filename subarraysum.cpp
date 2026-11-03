class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        m[0] = 1; // empty prefix
        int prefix = 0;
        int count = 0;
        
        for(int num : nums){
            prefix += num;
            int need = prefix - k;
            if(m.find(need) != m.end()){
                count += m[need];
            }
            m[prefix]++;
        }
        return count;
    }
};