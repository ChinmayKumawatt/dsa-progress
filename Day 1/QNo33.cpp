class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s = 0;
        int e = nums.size() -1;
        int m = s + (e-s)/2;
        if(nums[s]<=nums[e]){
            while(s<=e){
                if(nums[m]==target){
                    return m;
                }
                else if(nums[m]<target){
                    s = m +1;
                }
                else{
                    e = m-1;
                }
                m = s + (e-s)/2;
            }

        }
        else{
            
            int pivot = 0;
            while(s<e){
            if(nums[m]>=nums[0]){
                s = m +1;
            }
            else{
                e = m;
            }
            m = s + (e-s)/2;
            }
            pivot = s;
            s=0;
            e=nums.size()-1;
            if(nums[pivot]<=target && target<=nums[e]){
               s = pivot;
               e = nums.size() -1;
            }
            else{
                s= 0;
                e=pivot-1;
            }

            while(s<=e){
                m=s + (e-s)/2;
                if(nums[m]==target){
                    return m;
                }
                else if(nums[m]<target){
                    s = m+1;
                }
                else{
                    e = m-1;
                }
            }
        
        }
        return -1;
    }
};