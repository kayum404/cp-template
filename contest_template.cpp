/* ---------- In the name of Allah. ---------- */
#include <bits/stdc++.h>
using namespace std;

/* PBDS */
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

/* ---------- TYPES ---------- */
using ll = long long;
using ull = unsigned long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

template<typename T>
using ordered_set = tree<
    T, null_type, less<T>,
    rb_tree_tag, tree_order_statistics_node_update
>;

template<typename T>
using ordered_multiset = tree<
    pair<T, int>, null_type, less<pair<T, int>>,
    rb_tree_tag, tree_order_statistics_node_update
>;

/* ---------- MIN / MAX ---------- */
template<class T>
inline bool minn(T& a, const T& b) {
    return b < a ? a = b, 1 : 0;
}

template<class T>
inline bool maxx(T& a, const T& b) {
    return a < b ? a = b, 1 : 0;
}

/* ---------- FAST IO ---------- */
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

/* ---------- LOOP ---------- */
#define rep(i,n) for(int i=0; i<(n); i++)
#define per(i,n) for(int i=(n)-1; i>=0; i--)
#define rep2(i,l,r) for(int i=(l); i<(r); i++)

/* ---------- SHORTCUTS ---------- */
#define PB push_back
#define PPB pop_back
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define LB lower_bound
#define UB upper_bound
#define F first
#define S second
#define SZ(x) (int)(x).size()

/* ---------- PRINT ---------- */
#define yes cout << "Yes\n"
#define no cout << "No\n"
#define nl cout << '\n'
#define sp cout << ' '

/* ---------- CONSTANTS ---------- */
const ll INF = (1LL << 62);
const ll MOD = 1e9 + 7;

/* ---------- MATH ---------- */
ll gcd(ll a, ll b)  {return std::gcd(a, b);}
ll lcm(ll a, ll b) {
    if(a == 0 || b == 0) return 0;
    return (a / gcd(a, b)) * b;
}

ll ceil_div(ll a, ll b)  {return a / b + (a % b > 0);}

// Binary exponentiation: a^b
ll binpow(ll a, ll b) {
    ll res = 1;
    while(b > 0) {
        if(b & 1) res *= a;
        a *= a;
        b >>= 1;
    }
    return res;
}
// Modular exponentiation: a^b % mod
ll modpow(ll a, ll b, ll mod = MOD) {
    ll res = 1;
    a %= mod;

    while(b > 0) {
        if(b & 1) res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}
/* ---------- SIEVE ---------- */
vector<bool> isPrime;
void sieve(int n) {
    if(n < 0) return;

    isPrime.assign(n + 1, true);

    if(n >= 0) isPrime[0] = false;
    if(n >= 1) isPrime[1] = false;

    for(int i = 2; 1LL * i * i <= n; i++) {
        if(isPrime[i]) {
            for(int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }
}

/* ---------- BIT MANIPULATION ---------- */
bool check_bit(ll n, int k) {return (n >> k) & 1LL;}
ll set_bit(ll n, int k) {return n | (1LL << k);}
ll unset_bit(ll n, int k) {return n & ~(1LL << k);}
ll toggle_bit(ll n, int k) {return n ^ (1LL << k);}

int popcnt(int x) {return __builtin_popcount((unsigned int)x);}
int popcnt(ll x) {return __builtin_popcountll((ull)x);}

/* ---------- VECTOR INPUT / OUTPUT ---------- */
#define vecin(v,n) vector<ll> v(n); rep(i,n) cin >> v[i]
#define vecout(v) for(auto &x : v) cout << x << ' '; nl;

void solve(){

    

}
signed main() {
    fastio;
    int _ = 1;
    
    // cin >> _;
    
    for(int i = 1; i <= _; i++) {
        // cout << "Case : " << i << ' ';
        solve();
    }
    return 0;
}
