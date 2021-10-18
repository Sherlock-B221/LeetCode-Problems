/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root
 * @return {boolean}
 */

const isBalanced = function (root) {
  let isBalancedTree = true;

  const dfs = root => {
    if (root === null) return 0;

    const left = dfs(root.left);
    const right = dfs(root.right);

    if (Math.abs(left - right) > 1) {
      isBalancedTree = false;
    }
    return 1 + Math.max(left, right)
  }

  dfs(root);

  return isBalancedTree;
};
