class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      unordered_map<int,int> ts;
       vector<int>ans;
       for(int i =0;i<nums.size();i++){
        int first = nums[i];
        int sec = target - first;
         if (ts.find(sec) != ts.end()){
            return {ts[sec], i};
        }
          ts[first] = i;
        
        }
        return {};
       }
     
    };

