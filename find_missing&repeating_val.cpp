class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        unordered_set<int> s;
        vector<int> ans;
        int a,b,expsum,sum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int val = grid[i][j];
                if(s.find(val)!=s.end()){
                    a = val;
                    ans.push_back(a);
                    break;
                }
                s.insert(val);
            }
        }
        expsum = ((n*n)*(n*n+1))/2;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                sum += grid[i][j];
            }
        }
        b = expsum + a - sum;
        ans.push_back(b);
        return ans;
    }
};