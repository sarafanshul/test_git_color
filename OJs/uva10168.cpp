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


const int maxn=10000010;
bool isPrime[maxn];
vector <int> v;
int tol;
 
void get_prime(){
    memset(isPrime,true,sizeof(isPrime));
    for(ll i=2;i<maxn;i++){
        if(isPrime[i]){
            tol++;
            v.push_back(i);
        }
        for(ll j=0;j<tol && i*v[j]<maxn;j++){
            isPrime[i*v[j]]=false;
            if(i%v[j]==0) break;
        }
    }
}
 
int main(){
    get_prime();
    int n;
    while(scanf("%d",&n)!=EOF){
        if(n<8){
            printf("Impossible.\n");
            continue;
        }
        if(n&1){
            printf("2 3");
            n-=5;
        }
        else{
            printf("2 2");
            n-=4;
        }
        for(int i=0;i<tol && v[i]<=n;i++){
            if(isPrime[v[i]] && isPrime[n-v[i]]){
                printf(" %d %d\n",v[i],n-v[i]);
                break;
            }
        }
    }
    return 0;
}
