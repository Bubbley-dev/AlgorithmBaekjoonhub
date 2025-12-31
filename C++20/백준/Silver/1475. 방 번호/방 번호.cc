#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

    string s;
    cin >> s;
    vector<int> v(10, 0);
	
	for(char c : s)
	{
	    if (c=='9') v[6]++;
	    else v[c-'0']++;
	}
	
	v[6] = v[6]%2==0 ? v[6]/2 : (v[6]+1)/2;
	
	cout << *max_element(v.begin(), v.end());
	
	return 0;
}