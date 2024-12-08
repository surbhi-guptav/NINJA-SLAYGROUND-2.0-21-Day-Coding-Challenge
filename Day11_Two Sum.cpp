string read(int n, vector<int> book, int target)
{
    // Write your code here.
    
    for (int i =0; i< book.size()-1; i++){
        for (int j = i+1; j<book.size(); j++){
            if (book[i]+book[j]== target){
                return "YES";
                break;
            }
        }
    }
    return "NO";
}
