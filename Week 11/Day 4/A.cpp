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
#define lcm(a, b) ((a * b) / gcd(a, b))
#define e4 int32_t main()
#define PI 2.0 * acos(0.0)
using namespace std;
#ifdef LOKAL
#include "Debug_Template.h"
#else
#define HERE
#define debug(args...) 
#endif 
using namespace __gnu_pbds;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag,\
tree_order_statistics_node_update>;
void limitless(){
    int n,mx=0;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    sort(a.begin(),a.end());
    for(int i=1;i<=100;i++){
        int l=0,r=n-1,cnt=0;
        while(l < r){
            if(a[l] + a[r] == i){
                cnt++;
                l++;
                r--;
            }
            else if(a[l] + a[r] < i){
                l++;
            }
            else r--;
        }
        mx = max(mx,cnt);
    }
    cout << mx << endl;
}
e4{
    fst int t = 1;
    cin >> t;
    for (int i = 1; i <= t; ++i)
    {
        // cout << "Case " << i << ": ";
        limitless();
    }
    return 0;
}