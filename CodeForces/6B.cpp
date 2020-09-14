#pragma GCC optimize("Ofast")  
#pragma GCC target("avx,avx2,fma") 
#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#define ALL(x) x.begin(),x.end()
#define PB push_back
#define EB emplace_back
#define F first
#define S second
#define ll long long
#define MP make_pair
// #define int long long
// #define MAX LONG_LONG_MAX
// #define MIN LONG_LONG_MIN

using namespace std;

#ifdef LOCAL // setting up print debugging (yes lol)
template<class K, class V>ostream& operator<<(ostream&s,const pair<K,V>&p){s<<'<'<<p.x<<','<<p.y<<'>';return s;}
template<class T, class=typename T::value_type, class=typename enable_if<!is_same<T,string>::value>::type>
ostream& operator<<(ostream&s,const T&v){s<<'[';for(auto&x:v){s<<x<<", ";}if(!v.empty()){s<<"\b\b";}s<<']';return s;}
void __prnt(){cerr<<endl;} template<class T, class...Ts>void __prnt(T&&a,Ts&&...etc){cerr<<a<<' ';__prnt(etc...);}
#define print(...) __prnt(__VA_ARGS__)
#else
#define print(...)
#endif

template<typename A> ostream& operator<<(ostream &cout, vector<A> const &v);
template<typename A, typename B> ostream& operator<<(ostream &cout, pair<A, B> const &p) { return cout << "(" << p.f << ", " << p.s << ")"; }
template<typename A> ostream& operator<<(ostream &cout, vector<A> const &v) {
	cout << "["; for(int i = 0; i < v.size(); i++) {if (i) cout << ", "; cout << v[i];} return cout << "]";
}
template<typename A, typename B> istream& operator>>(istream& cin, pair<A, B> &p) {
	cin >> p.first;return cin >> p.second;
}

const size_t MAXN = 1e5 +7;


void check(){
	ll n ,m;
	char c;
	set<char> adj;
	cin >> n >> m >> c;
	vector<string> a(n+1);
	for(ll i = 0 ; i < n ;i++) cin >> a[i];
		
	for(ll i = 0 ; i < n ;i++){
		for(ll j = 0 ;j < m ;j++){
			if(a[i][j] == c){
				if( i != 0   && a[i-1][j] != c) adj.insert(a[i-1][j]);
              	if( i != n-1 && a[i+1][j] != c) adj.insert(a[i+1][j]);
              	if( j != 0   && a[i][j-1] != c) adj.insert(a[i][j-1]);
              	if( j!=m-1   && a[i][j+1] != c) adj.insert(a[i][j+1]);
			}
		}
	}
	ll ans = adj.size();
	if(adj.find('.')!=adj.end()) ans--;
	cout << ans;
}

int32_t main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); 
	cin.exceptions(cin.failbit);
	int t = 1;	
	// cin >> t;
	for(int i = 1 ; i <= t ;i++){
		// cout << "Case "<< i << ":\n";
		check();
	}
	return 0;
}
