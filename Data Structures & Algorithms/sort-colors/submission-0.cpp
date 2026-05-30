class Solution {
public:
    void sortColors(vector<int>& nums) {
        int mid_val=1;
        int low = 0;
        int mid= 0;
        int high= nums.size()-1;
        while(mid<=high){
            if(mid_val>nums[mid]){
                swap(nums[mid],nums[low]);
                low++;
                mid++;
            }
            else if(mid_val==nums[mid]){
                mid++;
            }
            else if (mid_val<nums[mid]){
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }
};