class Solution {
public:
void subset(vector<int>& nums,vector<int>&ans,int i,vector<vector<int>>& getSubsets) {
     if(i==nums.size())
      {
        getSubsets.push_back(ans);
        return;
       
      }
      ans.push_back(nums[i]);
      subset(nums,ans,i+1,getSubsets);
      ans.pop_back();
      subset(nums,ans,i+1,getSubsets);
}
    

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>getSubsets;
        vector<int>ans;
        int i=0;
     subset(nums,ans,i,getSubsets);
     return getSubsets;
     

        
    }
};