vector<int> spiralMatrix(vector<vector<int>>&MATRIX) {
    // Write your code here.
    int n = MATRIX.size(); // row
    int m = MATRIX[0].size(); // col
    int srow =0;
    int scol =0;
    vector<int>ans;
    while (srow < n && scol < m){
    for (int i= scol; i<m; i++ ){
        ans.push_back(MATRIX[srow][i]); 
    }
    srow++;
    for (int i = srow; i<n ; i++){
       ans.push_back(MATRIX[i][m-1]);
    }
    m--;
    if (srow < n){
       for (int i = m-1; i >= scol; i--) {
         ans.push_back(MATRIX[n - 1][i]);
       }
       n--;
    }
    if (scol < m){
       for (int i = n-1; i >= srow; i--) {
         ans.push_back(MATRIX[i][scol]);
       }
       scol++;
    }
    }
    return ans;
}
