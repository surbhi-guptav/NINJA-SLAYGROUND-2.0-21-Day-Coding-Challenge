int calcGCD(int n, int m){
    // Write your code here.
    int ans =1;
    if (n >= m){
        for (int i =2; i <=n ; i++){
              if (n% i == 0 && m% i==0){
                  ans = i;
              }
        }
        return ans;
    }
    else {
        for (int i =2; i <= m ; i++){
              if (n% i == 0 && m% i==0){
                  ans = i;
              }
        }
        return ans;
    }
}
