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
#define MP make_pair
using ll = long long ;
using db = long double ; // or double, if TL is tight
template< class T , size_t SZ> using ar = std::array<T , SZ> ; 
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
template<class T> using pqg = priority_queue<T,vector<T>,greater<T>>;
const long long MAXN = 2e5 +7;

struct cmp {
	bool operator()(const string &s, const string &t) const {
		return s.size()<t.size()||s.size()==t.size()&&s<t;
	}
};

void check(){
	ll n , k ;
	cin >> n >> k ;
	string s ;
	cin >> s ;
	set<string , cmp> a , a2 ;

	a.insert( "" ) ;
	for( ll i = 0 ; i < n ; i++ ) {
		a2 = a ;
		for( string t : a )
			a2.insert( t + s[i] ) ;
		a = a2 ;
		while( a.size() > k )
			a.erase( a.begin() ) ;
	}
	if( a.size() < k ){
		cout << "-1\n" ;
		return ;
	}
	ll ans = 0 ;
	for( auto &t : a )
		ans += n - t.size() ;
	cout << ans << '\n' ;
}

int32_t main(){
	#ifndef CUST_DEBUG
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	#endif
	int t_c = 1;	
	// cin >> t_c;
	for(int i = 1 ; i <= t_c ;i++){ print("Case : " , i) ; check(); }
	return 0;
}
