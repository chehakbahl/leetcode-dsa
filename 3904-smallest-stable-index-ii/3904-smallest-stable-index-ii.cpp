class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> suffix(n);
        suffix[n - 1] = nums[n - 1];
        for(int i=n-2;i>=0;i--){
            suffix[i]=min(suffix[i+1],nums[i]);
        }
        int maximum=nums[0];
        for(int i=0;i<nums.size();i++){
            maximum=max(maximum,nums[i]);

            int instability=maximum-suffix[i];
            if(instability<=k){
                return i;
            }
        }
        return -1;
    }
};