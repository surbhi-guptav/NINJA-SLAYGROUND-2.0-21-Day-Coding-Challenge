
void  mergesort(vector<int> &a, int start, int mid, int end, int &ans) {
  int n1 = mid - start + 1;
  int n2 = end - mid;
  vector<int> leftvector(n1);
  vector<int> rightvector(n2);

  for (int i = 0; i < n1; i++) {
    leftvector[i] = a[start + i];
  }
  for (int i = 0; i < n2; i++) {
    rightvector[i] = a[mid + 1 + i];
  }

  int i = 0;
  int j = 0;
  int k = start;
  while (i < n1 && j < n2) {
    if (leftvector[i] <= rightvector[j]) {
      a[k++] = leftvector[i];
      i++;
    } else {
      ans += n1 - i;
      a[k++] = rightvector[j];
      j++;
    }
  }
  while (i < n1) {
    a[k++] = leftvector[i];
    i++;
  }
  while (j < n2) {
    a[k++] = rightvector[j];
    j++;
  }

}
int solve(vector<int> &a, int start, int end, int &count) {
  if (a.size() == 0)
    return 0;
  if (a.size() == 1)
    return 1;
  if (start < end) {
    int mid = start + (end - start) / 2;
    solve(a, start, mid, count);
    solve(a, mid + 1, end, count);
    mergesort(a, start, mid, end, count);
  }
   return count;
}
int numberOfInversions(vector<int> &a, int n) {
  // Write your code here.
  int count =0;
   solve(a, 0, n - 1 ,count);
}
