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

int main() {
    lli n;
    cin >> n;
    vector<lli> p (n);
    stack<lli> s;

    for (int i=1; i<n; ++i) {
        cin >> p[i];
    }
    while (n != 1) {
        s.push(n);
        n = p[n - 1];
    }
    s.push(n);
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}