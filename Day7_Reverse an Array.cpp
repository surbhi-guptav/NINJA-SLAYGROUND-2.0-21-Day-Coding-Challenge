vector<int> reverseArray(int n, vector<int> &nums)
{
    // Write your code here.
    int l =0;
    int r = n-1 ;
    while (l<=r){
        swap (nums[l], nums[r]);
        l++;
        r--;
    }

    return nums;

}
