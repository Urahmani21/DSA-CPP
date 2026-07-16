class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int n=nums.size();
        // using k, as extra array nhi bna skte copy ke liye 
        int k=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i] != 0)
            {
                nums[k]=nums[i];
                k++;
                // jab jab non zero milega 
                // tab k ka use krke 
                // aage fill krdenge non zero elements , and k++
            }
        }
        // ab bacha hua places par k ko iincrement krdenge 
        while(k<n)
        {
            nums[k]=0;
            k++;
        }
    }
};