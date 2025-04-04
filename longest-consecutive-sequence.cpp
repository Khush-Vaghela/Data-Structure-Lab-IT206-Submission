class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if(nums.size() == 0){

            return 0;
        }

        unordered_set<int> s(nums.begin(), nums.end());
        int max_length = 0;
        int currentNum, length;
        
        for (int num : s) {

            if (s.find(num - 1) == s.end()) {
                currentNum = num;
                length = 1;
                
                while (s.find(currentNum + 1) != s.end()) {
                    currentNum++;
                    length++;
                }
                
                max_length = max(max_length, length);
            }
        }
        
        return max_length;
    }
};
