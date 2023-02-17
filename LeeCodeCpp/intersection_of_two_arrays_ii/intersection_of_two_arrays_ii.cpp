class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map <int,int> mp;
        vector <int> ans;
        for(auto i : nums1) mp[i]++;
        for(auto j : nums2)
        {
            if(mp[j] > 0)
            {
                ans.push_back(j);
                mp[j]--;
            }
        }       
        return ans;
    }
};