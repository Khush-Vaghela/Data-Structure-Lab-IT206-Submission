class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int, int> m;
        vector<int> result;

        for(int i = 0; i < nums.size(); i++){

            m[nums[i]] += 1;
        }

        multimap<int, int> n;
        for(auto i : m){

            n.insert({i.second, i.first});
        }

        auto it = n.end();

        for(int i = 0; i < k; i++){

            it--;
            result.push_back(it -> second);
        }

        return result;
    }
};
