/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public TreeNode create(int[] nums, int l, int h){
        if(h>=l){
            int mid=(l+h)/2;
            TreeNode p = new TreeNode(nums[mid],create(nums,l,mid-1),create(nums,mid+1,h));
            return p;
        }
        else return null;
    }
    public TreeNode sortedArrayToBST(int[] nums) {
        int n = nums.length;
        return create(nums,0,n-1);
    }
}