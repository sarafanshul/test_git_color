
#include<bits/stdc++.h>

using namespace std;

void check(){
	int n, m ,p;
	string s;
	cin >> n >> m >> s;
	vector<int> pref(n) ,ans(26);
	for (int i = 0; i < m; ++i) {
		cin >> p;
		++pref[p - 1];
	}

	for (int i = n - 1; i > 0; --i) {
		pref[i - 1] += pref[i];
	}
		
	for (int i = 0; i < n; ++i) {
		ans[s[i] - 'a'] += pref[i];
		++ans[s[i] - 'a'];
	}
	
	for (int i = 0; i < 26; ++i) cout << ans[i] << " ";
	
	cout << "\n";
}

int main(){
    int t ,n ,m;
    cin >> t;
    while(t--){
        check();
    }
}

