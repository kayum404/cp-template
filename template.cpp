/* ---------- In the name of Allah. ---------- */
/* ---------- Abdul Kayum ---------- */
/* ---------- CF-@abdulkayum ---------- */

#include <bits/stdc++.h>
using namespace std;

/* ---------- FAST IO ---------- */
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

/* ---------- LOOP ---------- */
#define rep(i,n) for(int i=0;i<n;i++)
#define rep2(i,a,b) for(int i=a;i<b;i++)
#define revloop(i,n) for(int i=n-1;i>=0;i--)

/* ---------- SHORTCUTS ---------- */
#define in(x) cin>>x
#define out(x) cout<<x
#define pb push_back
#define ppb pop_back
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define vecmin(v) min_element(all(v))
#define vecmax(v) max_element(all(v))
#define lb lower_bound
#define ub upper_bound
#define found(v,x) (find(all(v),x)!=v.end())
#define vecsum(v) accumulate(v.begin(), v.end(), 0LL)

/* ---------- pair ---------- */
#define pi pair<ll,ll>
#define mp make_pair
#define f first
#define s second

/* ---------- PRINT SHORTCUT ---------- */
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define nl cout << "\n"
#define sp cout << " "

/* ---------- TYPES ---------- */
typedef long long ll;

/* ---------- MATH ---------- */
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) ((a) / gcd(a,b) * (b))

/* ---------- SIEVE ---------- */
vector<bool> isPrime;

void sieve(int n) {
    isPrime.assign(n + 1, true);

    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }
}

/* ---------- VECTOR SHORTCUT ---------- */
#define vll vector<ll>
#define vecin(v,n) vector<ll> v(n); rep(i,n) cin >> v[i];
#define vecout(v) for(auto &x:v) cout << x << ' '; nl;

/*
STUCK CHECKLIST

[ ] Did I read every line?
[ ] Did I understand the output?
[ ] Did I try 2-3 examples?
[ ] Did I check edge cases?
[ ] Did I use the constraints?
[ ] Am I overthinking?
[ ] Is there an easier observation?
[ ] Have I seen a similar problem?
*/

void prayToAC(){

    

}

signed main(){
    fastio;

    int _ = 1;
    cin >> _;

    for(int i = 1; i <= _; i++){
        //cout << "Case : " << i << ' ';
        prayToAC();
    }

    return 0;
}
