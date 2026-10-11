
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
const ll MOD = 1'000'000'007LL;
const ll MOD2 = 998'244'353LL;

/* ---------- MATH ---------- */
ll gcd(ll a, ll b) {
    return std::gcd(a, b);
}

ll lcm(ll a, ll b) {
    if(a == 0 || b == 0) return 0;
    return (a / gcd(a, b)) * b;
}

// For a >= 0 and b > 0
ll ceil_div(ll a, ll b) {
    return (a + b - 1) / b;
}

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

/* ---------- SIEVE / SPF ---------- */

// spf[x] = smallest prime factor of x
vi spf, primes;

void sieve(int n) {
    spf.assign(n + 1, 0);
    primes.clear();

    for(int i = 2; i <= n; i++) {
        if(spf[i] == 0) {
            spf[i] = i;
            primes.PB(i);
        }

        for(int p : primes) {
            if(p > spf[i] || 1LL * p * i > n)
                break;

            spf[p * i] = p;
        }
    }
}

// Call sieve(n) before using these functions.
// is_prime and factorize require 0 <= n < spf.size().

bool is_prime(int n) {
    return n >= 2 &&
           n < (int)spf.size() &&
           spf[n] == n;
}

// Prime factorization with multiplicity.
// Example: 12 -> {2, 2, 3}
vi factorize(int n) {
    vi factors;

    if(n <= 1 || n >= (int)spf.size())
        return factors;

    while(n > 1) {
        factors.PB(spf[n]);
        n /= spf[n];
    }

    return factors;
}

// Distinct prime factors.
// Example: 12 -> {2, 3}
vi distinct_factors(int n) {
    vi factors;

    if(n <= 1 || n >= (int)spf.size())
        return factors;

    while(n > 1) {
        int p = spf[n];
        factors.PB(p);

        while(n % p == 0)
            n /= p;
    }

    return factors;
}

/* ---------- BIT MANIPULATION ---------- */

// Check whether the k-th bit is set (0-indexed)
bool check_bit(ll n, int k) {
    return (n >> k) & 1LL;
}

// Set the k-th bit
ll set_bit(ll n, int k) {
    return n | (1LL << k);
}

// Unset the k-th bit
ll unset_bit(ll n, int k) {
    return n & ~(1LL << k);
}

// Toggle the k-th bit
ll toggle_bit(ll n, int k) {
    return n ^ (1LL << k);
}

// Count set bits (number of 1s)
int popcnt(int x) {
    return __builtin_popcount((unsigned int)x);
}

int popcnt(ll x) {
    return __builtin_popcountll((ull)x);
}

// Check power of two: 1, 2, 4, 8, ...
bool is_power_of_two(ll n) {
    return n > 0 && (n & (n - 1)) == 0;
}

// Remove the lowest set bit
ll remove_lowest_set_bit(ll n) {
    return n & (n - 1);
}

// Isolate the lowest set bit
ll lowest_set_bit(ll n) {
    return n & -n;
}

// 2^k (use a valid shift position)
ll power_of_two(int k) {
    return 1LL << k;
}

/* ---------- VECTOR INPUT / OUTPUT ---------- */
#define vecin(v,n) vector<ll> v(n); rep(i,n) cin >> v[i]
#define vecout(v) for(auto &x : v) cout << x << ' '; nl;

/* ---------- SOLVE ---------- */
void solve() {

}

/* ---------- MAIN ---------- */
signed main() {
    fastio;

    // Uncomment when multiple test cases are needed:
    // int t;
    // cin >> t;
    // while(t--) solve();

    solve();
    return 0;
}
