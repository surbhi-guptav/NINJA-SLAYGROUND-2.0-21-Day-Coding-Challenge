int search(vector<int> &nums, int target) {
    // Write your code here.
    int l =0 ; int r = nums.size()-1;
    
    while (l <= r){
        int mid = l+(r-l)/2;
        if (target == nums [mid]){
            return mid;
        }
        else if (target < nums[mid] ){
            r = mid-1;
        }
        else{
            l = mid+1 ;
        }
        
    }
    return -1;
}
