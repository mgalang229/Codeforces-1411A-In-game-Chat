#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	int cnt=0;
	//count the frequency of the closing parenthesis until it encounters a character 
	for(int i=(int)s.size()-1; i>=0; --i) {
		if(s[i]==')')
			cnt++;
		else
			break;
	}
	//compare if the frequency is greater than the number of remaining characters
	cout << (cnt>(int)s.size()-cnt?"Yes":"No") << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--)
		solve();
}
