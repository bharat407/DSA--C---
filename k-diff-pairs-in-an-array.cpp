// Question Link:-   https://leetcode.com/problems/k-diff-pairs-in-an-array/

// Solution Is given 

// class Solution
// {
//     public:
//         int findPairs(vector<int> &nums, int k)
//         {
//             sort(nums.begin(), nums.end());
//             int i = 0, j = 1;
//             set<pair<int, int>> ans;
//             while (j < nums.size())
//             {
//                 int diff = nums[j] - nums[i];
//                 if (diff == k)
//                 {
//                     ans.insert({ nums[i],nums[j] });
//                         ++i, ++j;
//                 }
//                 else if (diff > k)
//                 {
//                     i++;
//                 }
//                 else
//                 {
//                     j++;
//                 }
//                 if (i == j)
//                 {
//                     j++;
//                 }
//             }
//             return ans.size();
//         }
// };