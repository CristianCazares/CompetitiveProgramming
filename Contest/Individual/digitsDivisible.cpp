#include <bits/stdc++.h>
using namespace std;
 
typedef long double ld;
typedef long long int lli;
typedef pair<lli, lli> pii;
typedef vector<lli> vi;
#define endl '\n'
#define fi first
#define se second
#define pb push_back
#define sz(s) lli(s.size())
#define all(s) begin(s), end(s)
#define print(s) cout << s << endl;
#define fore(i, a, b) for(lli i = (a), TT = (b); i < TT; ++i)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define printVector(s) for(lli i = 0; i < ((s).size()); i++) {print(s[i])}

int main() { _
    lli n; cin >> n;
    lli t; cin >> t;
    
    if (n == 1 && t == 10){
        print("-1");
    } else {
        if (t <= 9){
            for (int i = 1; i <= n; i++){
                cout << t;
            }
            cout << endl;
        }else{
            for (int i = 1; i <= n - 2; i++){
                cout << 1;
            }
            print(10);
        }
    }
    return 0;
}