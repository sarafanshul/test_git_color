
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

#include<bits/stdc++.h>

using namespace std;

void check(){
	int a, b, c;
	cin >> a >> b >> c;
	int ans = 1e9;
	int A = -1, B = -1, C = -1;
	for (int cA = 1; cA <= 2 * a; ++cA) {
		for (int cB = cA; cB <= 2 * b; cB += cA) {
			for (int i = 0; i < 2; ++i) {
				int cC = cB * (c / cB) + i * cB;
				int res = abs(cA - a) + abs(cB - b) + abs(cC - c);
				if (ans > res) {
					ans = res;
					A = cA;
					B = cB;
					C = cC;
				}
			}
		}
	}
	
	cout << ans << "\n" << A << " " << B << " " << C << "\n";
}

int main(){
    int t ,n ,m;
    cin >> t;
    while(t--){
        check();
    }
}

