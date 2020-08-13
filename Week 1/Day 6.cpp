class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        if(nums.size()<2) return {};
        int k=1;
        sort(nums.begin(),nums.end());
        for(int i=nums.size()-1;i>0;i--){
            k=1;
            if(nums[i]==nums[i-1]){
                i--;
                k=(i==0)?0:1;
            }
            nums.erase(nums.begin()+i);
        }
        if(nums[0]!=nums[1] && k==1){
           nums.erase(nums.begin()); 
        }
        return nums;
    }
};
