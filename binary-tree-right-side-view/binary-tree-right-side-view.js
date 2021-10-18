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
 * @return {number[]}
 */
const preOrder = function(node, arr, level) {
  if(!node) return;
  if(level >= arr.length){
    arr.push(node.val);
  }
  if(node.right) {
    preOrder(node.right, arr, level+1);
  }
  if(node.left) {
    preOrder(node.left, arr, level+1);
  }
}

const rightSideView = function (root) {
  if(!root) return [];
  let arr = [];
  preOrder(root, arr, 0);
  return arr;
};
