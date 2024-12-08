int lowerBound(vector<int> arr, int n, int x) {
  // Write your code here

  int l = 0;
  int r = n - 1;
  int ans = n;
  if (x >= arr[0]) {
    while (l <= r ) {
      int mid = l + (r - l) / 2;
      if (arr[mid] >= x) {
        ans = mid;
		r = mid -1;
      } else {
        l = mid + 1;
      }
    }
    return ans;

  } else {
    return 0;
  }
}
