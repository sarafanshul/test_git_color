
#include <bits/stdc++.h>
using namespace std;

#define all(x) begin(x), end(x)

typedef long long ll;
// typedef pair<int, int> pii;
// typedef vector<int> vi;

void check(){
	int n;
	cin >> n; 
	vector<in> a(n+1) ,b(2*n);
	for (int i = 0 ; i < 2*n ; ++i) {
		cin >> b[i];
		a[b[i]]++;
		if (a[b[i]] > 1) cout << b[i] << " ";
	}
}


int main() {
	cin.tie(0)->sync_with_stdio(0);
	int t;
	cin >> t;
	while(t--){
		check();
	}
}

