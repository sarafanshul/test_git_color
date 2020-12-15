#ifndef CUST_DEBUG
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma") 
#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("unroll-loops")
#endif
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ALL(x) x.begin(),x.end()
#define PB push_back
#define F first
#define S second
#define ll long long
#define double long double
#define MP make_pair
 
using namespace std;
 
template <typename K, typename V = __gnu_pbds::null_type>
using tree = __gnu_pbds::tree<K, V, less<K>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update>;
using llong = long long;
auto isz = [](const auto& c) { return int(c.size()); };
mt19937 rng((size_t) make_shared<char>().get());
 
#ifndef _LIB_FASTIO_
#define _LIB_FASTIO_
 
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wall"
#pragma GCC diagnostic ignored "-Wextra"
#pragma GCC diagnostic ignored "-Wconversion"
 
/** Fast allocation */
 
#ifdef FAST_ALLOCATOR_MEMORY
	int allocator_pos = 0;
	char allocator_memory[(int)FAST_ALLOCATOR_MEMORY];
	inline void * operator new ( size_t n ) {
		char *res = allocator_memory + allocator_pos;
		allocator_pos += n;
		assert(allocator_pos <= (int)FAST_ALLOCATOR_MEMORY);
		return (void *)res;
	}
	inline void operator delete ( void * ) noexcept { }
	//inline void * operator new [] ( size_t ) { assert(0); }
	//inline void operator delete [] ( void * ) { assert(0); }
#endif
 
/** Fast input-output */
 
/** Read */
 
static const int buf_size = 4096;
 
static unsigned char buf[buf_size];
static int buf_len = 0, buf_pos = 0;
 
inline bool isEof() {
	if (buf_pos == buf_len) {
		buf_pos = 0, buf_len = fread(buf, 1, buf_size, stdin);
		if (buf_pos == buf_len)
			return 1;
	}
	return 0;
}
 
inline int getChar() { 
	return isEof() ? -1 : buf[buf_pos++];
}
 
inline int peekChar() { 
	return isEof() ? -1 : buf[buf_pos];
}
 
inline bool seekEof() { 
	int c;
	while ((c = peekChar()) != -1 && c <= 32)
		buf_pos++;
	return c == -1;
}
 
inline void skipBlanks() {
	while (!isEof() && buf[buf_pos] <= 32U)
		buf_pos++;
}
 
inline int readChar() {
	int c = getChar();
	while (c != -1 && c <= 32)
		c = getChar();
	return c;
}
 
inline unsigned int readUInt() {
	int c = readChar();
	unsigned int x = 0;
	while ('0' <= c && c <= '9')
		x = x * 10 + c - '0', c = getChar();
	return x;
}
 
template <class T = int>
inline T readInt() {
	int s = 1, c = readChar();
	T x = 0;
	if (c == '-')
		s = -1, c = getChar();
	else if (c == '+')
		c = getChar();
	while ('0' <= c && c <= '9')
		x = x * 10 + c - '0', c = getChar();
	return s == 1 ? x : -x;
}
 
inline long long readLong() {
	return readInt<long long>();
}
 
inline double readDouble() {
	int s = 1, c = readChar();
	double x = 0;
	if (c == '-')
		s = -1, c = getChar();
	while ('0' <= c && c <= '9')
		x = x * 10 + c - '0', c = getChar();
	if (c == '.') {
		c = getChar();
		double coef = 1;
		while ('0' <= c && c <= '9')
			x += (c - '0') * (coef *= 1e-1), c = getChar();
	}
	return s == 1 ? x : -x;
}
 
inline void readWord(char *s) { 
	int c = readChar();
	while (c > 32)
		*s++ = c, c = getChar();
	*s = 0;
}
 
inline void readWord(string &s) {
	s.clear();
	int c = readChar();
	while (c > 32)
		s += c, c = getChar();
}
 
inline bool readLine(char *s) { 
	int c = getChar();
	while (c != '\n' && c != -1)
		*s++ = c, c = getChar();
	*s = 0;
	return c != -1;
}
 
inline bool readLine(string &s) {
	s.clear();
	int c = getChar();
	while (c != '\n' && c != -1)
		s += c, c = getChar();
	return c != -1;
}
 
/** Write */
 
static int write_buf_pos = 0;
static char write_buf[buf_size];
 
inline void writeChar(int x) {
	if (write_buf_pos == buf_size)
		fwrite(write_buf, 1, buf_size, stdout), write_buf_pos = 0;
	write_buf[write_buf_pos++] = x;
}
 
inline void flush() {
	if (write_buf_pos) {
		fwrite(write_buf, 1, write_buf_pos, stdout), write_buf_pos = 0;
		fflush(stdout);
	}
}
 
template <class T> 
inline void writeInt(T x, char end = 0, int output_len = -1) {
	if (x < 0)
		writeChar('-'), x = -x;
 
	char s[24];
	int n = 0;
	while (x || !n)
		s[n++] = '0' + x % 10, x /= 10;
	while (n < output_len)
		s[n++] = '0';
	while (n--)
		writeChar(s[n]);
	if (end)
		writeChar(end);
}
 
inline void writeWord(const char *s) {
	while (*s)
		writeChar(*s++);
}
 
inline void writeWord(const string& s) {
	writeWord(s.c_str());
}
 
inline void writeDouble(double x, int output_len = 11) {
	if (x < 0)
		writeChar('-'), x = -x;
	int t = (int)x;
	writeInt(t), x -= t;
	writeChar('.');
	for (int i = output_len - 1; i > 0; i--) {
		x *= 10;
		t = std::min(9, (int)x);
		writeChar('0' + t), x -= t;
	}
	x *= 10;
	t = std::min(9, (int)(x + 0.5));
	writeChar('0' + t);
}
 
/** Buffer flusher */
 
static struct buffer_flusher_t {
	~buffer_flusher_t() {
		flush();
	}
} buffer_flusher;
 
/** Reader and writer */
 
struct fast_reader {
	fast_reader& operator>>(int& n) {
		n = readInt(); return *this;
	}
	fast_reader& operator>>(unsigned int& n) {
		n = readUInt(); return *this;
	}
	fast_reader& operator>>(llong& n) {
		n = readLong(); return *this;
	}
	fast_reader& operator>>(double& n) {
		n = readDouble(); return *this;
	}
	fast_reader& operator>>(float& n) {
		n = (float) readDouble(); return *this;
	}
	fast_reader& operator>>(string& s) {
		readWord(s); return *this;
	}
	fast_reader& operator>>(char& c) {
		c = (char) readChar(); return *this;
	}
	template<typename T>
	fast_reader& operator>>(vector<T>& a) {
		for (T& i : a) {
			(*this) >> i;
		}
		return *this;
	}
} f_reader;
 
struct fast_writer {
	template<typename T>
	fast_writer& operator<<(T n) {
		writeInt(n); return *this;
	}
	fast_writer& operator<<(double n) {
		writeDouble(n); return *this;
	}
	fast_writer& operator<<(float n) {
		writeDouble(n); return *this;
	}
	fast_writer& operator<<(const string& s) {
		writeWord(s); return *this;
	}
	fast_writer& operator<<(const char* s) {
		writeWord(s); return *this;
	}
	fast_writer& operator<<(char c) {
		writeChar(c); return *this;
	}
	template<typename T>
	fast_writer& operator<<(const vector<T>& a) {
		for (size_t i = 0; i < a.size(); ++i) {
			if (i) {
				(*this) << ' ';
			}
			(*this) << a[i];
		}
		return *this;
	}
	void flush() {
		::flush();
	}
} f_writer;
 
#define cin f_reader
#define cout f_writer
 
#pragma GCC diagnostic pop
#endif //_LIB_FASTIO_
#ifndef _LIB_UTILS_
#define _LIB_UTILS_
 
template <typename T, T val = T()>
auto make_vector(size_t d) {
	return vector<T>(d, val);
}
 
template <typename T, T val = T(), typename ...Ds>
auto make_vector(size_t d, Ds... ds) {
	return vector<decltype(make_vector<T, val>(ds...))>(d, make_vector<T, val>(ds...));
}
#endif //_LIB_UTILS_
 
 
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

//https://github.com/ei1333
template< typename Monoid, typename F >
struct SegmentTree {
  int sz;
  vector< Monoid > seg;

  const F f;
  const Monoid M1;
  
  SegmentTree(int n, const F f, const Monoid &M1) : f(f), M1(M1) {
	sz = 1;
	while(sz < n) sz <<= 1;
	seg.assign(2 * sz, M1);
  }

  void set(int k, const Monoid &x) {
	seg[k + sz] = x;
  }

  void build() {
	for(int k = sz - 1; k > 0; k--) {
	  seg[k] = f(seg[2 * k + 0], seg[2 * k + 1]);
	}
  }

  void update(int k, const Monoid &x) {
	k += sz;
	seg[k] = x;
	while(k >>= 1) {
	  seg[k] = f(seg[2 * k + 0], seg[2 * k + 1]);
	}
  }

  Monoid query(int a, int b) {
	Monoid L = M1, R = M1;
	for(a += sz, b += sz; a < b; a >>= 1, b >>= 1) {
	  if(a & 1) L = f(L, seg[a++]);
	  if(b & 1) R = f(seg[--b], R);
	}
	return f(L, R);
  }

  Monoid operator[](const int &k) const {
	return seg[k + sz];
  }

  template< typename C >
  int find_subtree(int a, const C &check, Monoid &M, bool type) {
	while(a < sz) {
	  Monoid nxt = type ? f(seg[2 * a + type], M) : f(M, seg[2 * a + type]);
	  if(check(nxt)) a = 2 * a + type;
	  else M = nxt, a = 2 * a + 1 - type;
	}
	return a - sz;
  }

  template< typename C >
  int find_first(int a, const C &check) {
	Monoid L = M1;
	if(a <= 0) {
	  if(check(f(L, seg[1]))) return find_subtree(1, check, L, false);
	  return -1;
	}
	int b = sz;
	for(a += sz, b += sz; a < b; a >>= 1, b >>= 1) {
	  if(a & 1) {
		Monoid nxt = f(L, seg[a]);
		if(check(nxt)) return find_subtree(a, check, L, false);
		L = nxt;
		++a;
	  }
	}
	return -1;
  }

  template< typename C >
  int find_last(int b, const C &check) {
	Monoid R = M1;
	if(b >= sz) {
	  if(check(f(seg[1], R))) return find_subtree(1, check, R, true);
	  return -1;
	}
	int a = sz;
	for(b += sz; a < b; a >>= 1, b >>= 1) {
	  if(b & 1) {
		Monoid nxt = f(seg[--b], R);
		if(check(nxt)) return find_subtree(b, check, R, true);
		R = nxt;
	  }
	}
	return -1;
  }
};

template< typename Monoid, typename F >
SegmentTree< Monoid, F > get_segment_tree(int N, const F& f, const Monoid& M1) {
  return {N, f, M1};
}


void check(){
	ll n;
	cin >> n;
	auto sg = get_segment_tree(n ,[](ll x ,ll y){
		if(!x || !y) return x + y ;
		return __gcd(x ,y);}
	, 0LL) ;

	vector<ll> a(n);
	for(ll i = 0 ; i < n ; i++){
		cin >> a[i];
		sg.set(i ,a[i]);
	}
	sg.build() ;

	ll q;
	cin >> q;

	auto can = [&](ll l ,ll r ,ll x) -> bool {
		ll left = l - 1 ,right = r;
		while(right - left > 1){
			ll mid = (right + left) / 2;
			if(__gcd( sg.query(l ,mid+1) ,x ) == x ){
				left = mid ;
			}else {
				right = mid ;
			}
		}
		return ( __gcd(sg.query(left + 2 ,r) ,x) == x );
	} ;

	while(q -- ){
		ll t;
		cin >> t;
		if(t == 1){
			ll l ,r ,x ;
			cin >> l >> r >> x;
			cout << (can(--l ,r ,x) ? "YES" : "NO") <<'\n';
		}else {
			ll i ,y ;
			cin >> i >> y;
			sg.update(--i ,y);
		}
	}
}

int32_t main(){
	#ifndef CUST_DEBUG
// 	ios_base::sync_with_stdio(false); cin.tie(NULL);
	#endif
	int t = 1;	
	// cin >> t;
	for(int i = 1 ; i <= t ;i++){ check(); }
	return 0;
}
