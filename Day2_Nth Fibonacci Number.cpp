#include<bits/stdc++.h>
using namespace std;

int solve (int n){
    if (n==1 ) return 1;
    if (n==2 ) return 1;
    int sum = solve(n-1) + solve(n-2);
    return sum;
}
int main()
{
        /*
        *  Write your code here. 
         *  Read input as specified in the question.
         *  Print output as specified in the question.
        */

        int n;
        cin>>n;
        cout<< solve(n);
            

}
