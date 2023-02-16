class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      unordered_map<int, int> look;
      vector<int> ans;

      for(int i=0;i < nums.size(); i++){
          
          int reqiured = target - nums[i];
          if(look.find(reqiured) != look.end()){
            ans.push_back(i);
            ans.push_back(look[reqiured]);
            break;
          }
          else {
            look.insert(make_pair(nums[i], i));
          }
      }  
      return ans;
    }
};