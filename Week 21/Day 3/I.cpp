#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define fst                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long 
#define endl '\n'
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a / gcd(a, b)) * b)
#define e4 int32_t main()
#define Infinite void
#define PI 2.0 * acos(0.0)
using namespace std;
#ifdef LOKAL
#include "Debug_Template.h"
#else
#define HERE
#define debug(args...) 
#endif 
using namespace __gnu_pbds;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;

Infinite Void() {
    ll n,k;
    cin >> k >> n;
    ll rem = n - k;
    ll mx = 1;
    for(ll i=1;i<=n;i++){
        ll res = (i * (i + 1)) / 2;
        res -= i;
        if(res > rem){
            mx = i - 1;
            break;
        }
    }
    ll i = 1,sum = 1;
    vector<ll> a;
    a.push_back(1);
    while(i <= mx){
        sum += i;
        a.push_back(sum);
        i++;
        if(a.size() == k) break;
    }
    i = a.size() + 1;
    while(i <= k){
        sum++;
        a.push_back(sum);
        i++;
    }
    for(auto x : a) cout << x << " ";
    cout << endl;
}
e4{
    fst ll t = 1;
    cin >> t;
    for (ll i=1;i<=t;++i){
        // cout << "Case " << i << ": ";
        Void();
    }
    return 0;
}
