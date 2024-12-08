#include <bits/stdc++.h> 
vector<int> addOneToNumber(vector<int> arr)
{
    // Write your code here
   int n = arr.size();
    for ( int i=n-1; i>=0; i--){
      if (arr[i] < 9) {
        arr[i]++;
        while (arr.size()> 1 && arr[0]==0){
            arr.erase(arr.begin());
        }
        return arr;
      }
      arr[i] = 0;
    }
    arr.insert(arr.begin(), 1);
    while (arr.size()> 1 && arr[0]==0){
            arr.erase(arr.begin());
        }
    return arr;
}
