// METHOD 1
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        // expected sum 
        long long sum=0;
        long long expectedsum=((n) * (n+1))/2;
        for(int i=0;i<n;i++)
        {
            sum=sum+nums[i];
        }
        return expectedsum-sum;
    }
};

// method 2 

// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//        int n=nums.size();
//        sort(nums.begin(),nums.end());
//        for(int i=0;i<n;i++)
//        {
//         if(nums[i] != i)
//         {
//             return i;
//         }
//        }
//        return nums.size();
//     }
// };

// // method 3

// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//        int n = nums.size();
//        for(int i=0;i<=n;i++)
//        {
//         bool flag = false;

//         for(int j=0;j<n;j++)
//         {
//             if(nums[j] == i )
//             {
//                 flag = true;
//                 break;
//             }
//         }
//         if(flag == false)
//         {
//             return i;
//         }
//        }
//        return 0;
//     }
// };