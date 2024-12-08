int reverseNumber(int n)
{
	// Write your code here.
	string s = to_string(n);
	reverse(s.begin(), s.end());
	int m = stoi(s);
	return m;
}
