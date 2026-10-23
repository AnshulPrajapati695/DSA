class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int idx = 0; // write index
        
        for (int i = 0; i < n; ) {
            char ch = chars[i];
            int count = 0;
            
            // Count consecutive repeating characters
            int j = i;
            while (j < n && chars[j] == ch) {
                count++;
                j++;
            }
            
            // Write the character
            chars[idx++] = ch;
            
            // If count is greater than 1, convert count to characters and write them
            if (count > 1) {
                string str = to_string(count);
                for (char c : str) {
                    chars[idx++] = c;
                }
            }
            
            // Move 'i' to the next new character
            i = j;
        }
        
        chars.resize(idx);
        return idx;
    }
};
