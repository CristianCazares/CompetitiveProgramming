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
 
int main()
{   _
    lli t;
    cin >> t;
    while(t--){
        lli n;
        cin >> n;
        vector<lli> ints(n);
        for (int i = 0; i < n; i++) {
            cin >> ints[i];
        }
 
        lli i = 0, j = n - 1;
        while (i < j){
            cout << ints[i] << " ";
            cout << ints[j] << " ";
            i++;
            j--;    
        };
        if (i == j){
            cout << ints[i] << " ";
        }
        cout << "\n";
    }
    
    return 0;
}