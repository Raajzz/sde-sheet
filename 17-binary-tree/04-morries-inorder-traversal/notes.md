# Morris Traversal

- O(N) Time
- O(1) Space
- Uses threaded binary tree concept 

## Algorithm

- If there was a left sub-tree then find the right-most node of the left sub-tree and then make it point to the root.
- If there wasn't any left sub-tree then just print it (Because, if there was no left node, then as per `inorder traversal's` left-root-right, the current node is the root and therefore will be printed).