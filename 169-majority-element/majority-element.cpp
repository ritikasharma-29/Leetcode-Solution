class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt=0;
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(cnt == 0){
                j=nums[i];
            }
            
            if(nums[i]==j){
                cnt++;
            } else{
                cnt--;
            }
            
        }
        return j;
    }
};