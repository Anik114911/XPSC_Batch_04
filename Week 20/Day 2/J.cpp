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

int ans(int i,vector<int> &a, vector<bool> &vis, string &s, vector<int> &reach, int v){
    if(reach[i] != 0) return reach[i];
    if(vis[i]) return reach[i] = v;
    vis[i] = true;
    if(s[i-1] == '0') v++;
    return reach[i] = ans(a[i],a,vis,s,reach,v);
}
Infinite Void() {
    int n;
    cin >> n;
    vector<int> a(n+1),reach(n+1,0);
    vector<bool> vis(n+1,false);
    string s;
    for(int i=1;i<=n;i++) cin >> a[i];
    cin >> s;
    for(int i=1;i<=n;i++) cout << ans(i,a,vis,s,reach,0) << " ";
    cout << endl;
}
e4{
    fst int t = 1;
    cin >> t;
    for (int i=1;i<=t;++i){
        // cout << "Case " << i << ": ";
        Void();
    }
    return 0;
}
