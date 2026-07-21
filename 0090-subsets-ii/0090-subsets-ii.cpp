class Solution {
public:
void subset(vector<int>& nums,vector<int>&ans,int i,vector<vector<int>>& getSubsets) {
    int n=nums.size();
     if(i==n)
      {
        getSubsets.push_back(ans);
        return;
       
      }
      ans.push_back(nums[i]);
      subset(nums,ans,i+1,getSubsets);
      ans.pop_back();
      int idx=i+1;
      while(idx<n && nums[idx-1]==nums[idx])
      {
        idx++;
      }
      subset(nums,ans,idx,getSubsets);
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
         vector<vector<int>>getSubsets;
         
        vector<int>ans;
        sort(nums.begin(),nums.end());
        int i=0;
     subset(nums,ans,i,getSubsets);
    
     return getSubsets;
        
    }
};