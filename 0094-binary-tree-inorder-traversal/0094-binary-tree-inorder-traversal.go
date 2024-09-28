/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */
func inorderRec(root *TreeNode, ans *[]int) {
  if root == nil {
    return
  }
  inorderRec(root.Left, ans)
  *ans = append(*ans, root.Val)
  inorderRec(root.Right, ans)
}

func inorderTraversal(root *TreeNode) []int {
  
  var ans []int  
  
  inorderRec(root, &ans)
  
  return ans
}