#include<bits/stdc++.h>
#define fst                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long 
#define endl '\n'
#define e4 int main()
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define PI 2.0 * acos(0.0)
using namespace std;

void limitless(){
    
}
e4{
    fst int tc;
    // cin >> tc;
    // for (int t = 1; t <= tc; t++)
    // {
    //     // cout << "Case " << t << ": ";
    //     limitless();
    // }
    int n;
    cin >> n;
    cout << n / 2 << endl;
    if(n % 2 == 0){
        for(int i=0;i<(n/2);i++) cout << "2" << " ";
        cout << endl;
    }
    else if(n % 2 != 0){
        for(int i=0;i<(n/2)-1;i++){
            cout << "2" << " ";
        }
        cout << "3" << endl;

    }
    return 0;
}
