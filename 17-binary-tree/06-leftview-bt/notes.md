- Either `left` view or `right` view, we always need to find the first and last node of each level.
- Traversal Techniques
    - Iterative
        - Level-Order -> First and Last Element
        - O(N) for time
        - O(N) for space (Not always but we're to store the entire level at a time, eh)
    - Recursive
        - Reverse Preorder.
- Recursive Solution
    - For right view -> Use reverse preorder - root-right-left
    - For left view -> Use preorder - root-left-right
    - One more thing that matters is that, we need to have a way to store the left most or right most element right, for that we'll use something like a stack where,
    ```c++
        if(level == stack.size()){
            stack.push(root->value);
        }
    ```