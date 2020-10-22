#pragma GCC optimize("Ofast")  // remove in mingw32 bit ;
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
#define double long double
#define MP make_pair
// #define int long long
// #define MAX LONG_LONG_MAX
// #define MIN LONG_LONG_MIN

using namespace std;


#ifdef CUST_DEBUG
template<class K, class V>ostream& operator<<(ostream&s,const pair<K,V>&p){s<<'<'<<p.F<<','<<p.S<<'>';return s;}
template<class T, class=typename T::value_type, class=typename enable_if<!is_same<T,string>::value>::type>
ostream& operator<<(ostream&s,const T&v){s<<'[';for(auto&x:v){s<<x<<", ";}if(!v.empty()){s<<"\b\b";}s<<']';return s;}
void __prnt(){cerr<<endl;} template<class T, class...Ts>void __prnt(T&&a,Ts&&...etc){cerr<<a<<' ';__prnt(etc...);}
#define print(...) __prnt(__VA_ARGS__)
#else
#define print(...)
template<typename A> ostream& operator<<(ostream &cout, vector<A> const &v);
template<typename A, typename B> ostream& operator<<(ostream &cout, pair<A, B> const &p){return cout<<"("<<p.F<<", "<<p.S<<")";}
template<typename A> ostream& operator<<(ostream &cout,vector<A> const &v){cout<<"[";for(int i=0;i<v.size();i++){if(i)cout<<", ";cout<<v[i];}return cout<<"]";}
template<typename A, typename B> istream& operator>>(istream& cin, pair<A, B> &p){cin>>p.F;return cin>>p.S;}
#endif

const long long MAXN = 71;
ll n ,m ,k ,dp[MAXN][MAXN][MAXN][MAXN] ,mat[MAXN][MAXN];

ll go(ll i ,ll j ,ll cnt ,ll rem){
	
	if(i == n){
		return rem == 0 ? 0 : LONG_LONG_MIN;
	}
	if(j == m || cnt == m / 2){
		return dp[i][j][cnt][rem] = go(i+1 ,0 ,0 ,rem);
	}
	if(dp[i][j][cnt][rem] != -1){
		return dp[i][j][cnt][rem];
	}
	ll res = 0 ,add = ( ( rem - (mat[i][j] % k)) + k) % k;

	if(cnt < m/2 ){
		res = max(go(i ,j+1 ,cnt ,rem) ,
				mat[i][j] + go(i ,j+1 ,cnt+1 ,add) );
	}
	return dp[i][j][cnt][rem] = res;

}

void check(){
	cin >> n >> m >> k;
	memset(dp ,-1LL ,sizeof(dp));
	for(ll i = 0 ;i < n ;i++){
		for(ll j = 0 ;j < m; j++ ){
			cin >> mat[i][j];
		}
	}
	ll res = go(0 ,0 ,0 ,0);
	cout << res;
}

int32_t main(){
	#ifndef CUST_DEBUG
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	#endif
	// cin.exceptions(cin.Failbit);
	int t = 1;	
	// cin >> t;
	for(int i = 1 ; i <= t ;i++){
		// cout << "Case "<< i << ":\n";
		check();
	}
	return 0;
}
