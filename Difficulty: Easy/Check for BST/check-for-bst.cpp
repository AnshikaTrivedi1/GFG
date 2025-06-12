class Solution {
  public:
    bool isBST(Node* root) {
        return validate(root, INT_MIN, INT_MAX);
    }
    
private:
    bool validate(Node* node, int minVal, int maxVal) {
        if (node == NULL) return true;
        
        if (node->data <= minVal || node->data >= maxVal) {
            return false;
        }
        
        return validate(node->left, minVal, node->data) && 
               validate(node->right, node->data, maxVal);
    }
};