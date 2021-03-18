#ifndef CUST_DEBUG
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma") 
#pragma GCC optimize("unroll-loops")
#endif
#include <bits/stdc++.h>
#define ALL(x) x.begin(),x.end()
#define PB push_back
#define F first
#define S second
#define ll long long
#define double long double
#define MP make_pair

using namespace std;

#ifdef CUST_DEBUG
template<class K, class V>ostream& operator<<(ostream&s,const pair<K,V>&p){s<<'<'<<p.F<<','<<p.S<<'>';return s;}
template<class T, class=typename T::value_type, class=typename enable_if<!is_same<T,string>::value>::type>
ostream& operator<<(ostream&s,const T&v){s<<'[';for(auto&x:v){s<<x<<", ";}if(!v.empty()){s<<"\b\b";}s<<']';return s;}
void __prnt(){cerr<<endl;} template<class T, class...Ts>void __prnt(T&&a,Ts&&...etc){cerr<<a<<' ';__prnt(etc...);}
#define print(...) __prnt(__VA_ARGS__)
#else
#define print(...)
#endif

const long long MAXN = 1e5 +7;

void check(){
	ll n; 
	cin >> n; 
	vector<pair<ll ,ll>> a(n) ;
	for(ll i = 0 ; i < n ; i++){
		cin >> a[i].F ;
		a[i].S = i + 1 ;
	}
	sort(ALL(a)) ;
	vector<ll> pre(n + 1 , 0) ;
	for(ll i = 0 ; i < n ; i++){
		pre[i + 1] = pre[i] + a[i].F ;
	}
	vector<ll> ans = { a.back().S } ;
	ll idx = n - 1 ;

	while( idx > 0 && pre[idx] >= a[idx].F ){
		idx-- ;
		ans.PB( a[idx].S ) ;
	}
	sort(ALL(ans)) ;
	cout << ans.size() << '\n' ;
	for(ll&i : ans)
		cout << i << ' ';
	cout << '\n' ;
}

int32_t main(){
	#ifndef CUST_DEBUG
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	#endif
	int t = 1;	
	cin >> t;
	for(int i = 1 ; i <= t ;i++){ print("Case : " , i) ; check(); }
	return 0;
}
