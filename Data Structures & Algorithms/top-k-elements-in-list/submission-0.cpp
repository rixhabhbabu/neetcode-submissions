class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for(int i = 0; i < nums.size(); i++){
            freq[nums[i]]++;
        }

        // freq ko vector me convert karo
        vector<pair<int,int>> vec;
        for(auto &p : freq){
            vec.push_back({p.second, p.first}); // {frequency, element}
        }

        // sort by frequency (descending)
        sort(vec.begin(), vec.end(), [](auto &a, auto &b){
            return a.first > b.first;
        });

        vector<int> ans;
        for(int i = 0; i < k; i++){
            ans.push_back(vec[i].second);
        }

        return ans;
    }
};
