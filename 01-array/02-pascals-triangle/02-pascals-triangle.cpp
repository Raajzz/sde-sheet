#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
    vector<vector<long long int>> res;
    res.reserve(n);
    res.push_back({1});
    for(int i=1; i<n; i++){
        vector<long long int> row_res;
        row_res.push_back(1);
        for(int j=0; j<res[i-1].size()-1;j++){
            row_res.push_back(res[i-1][j] + res[i-1][j+1]);
        }
        row_res.push_back(1);
    }
    return res;
}
