/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    TreeNode* create(vector<int>& nums, int l, int h){
        if(h>=l){
            int mid = (h+l)/2;
            TreeNode* p = new TreeNode(nums[mid],create(nums,l,mid-1),create(nums,mid+1,h)); 
            return p;
        }
        else return NULL;
    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n= nums.size();
        return create(nums,0,n-1);
    }
};