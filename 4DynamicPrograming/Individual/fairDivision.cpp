// ¢: ¢ristian ¢ázares
//

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
    lli t; cin >> t;

    while (t--){
        lli n, a = 0, b, s = 0, aa = 0;
        cin >> n;
        vector<int> v(n);
        for(lli i = 0; i < n; i++){
            cin >> v[i];
            s += v[i];
            if (v[i] == 1){
                a++;
            }
        }
        b = n - a;
        aa = a / 2;

        if(s % 2){
            print("NO");
        }else {
            if((b % 2) && !a){
                print("NO");
            }else{
                print("YES");
            }
        }
    }
    return 0;
}
