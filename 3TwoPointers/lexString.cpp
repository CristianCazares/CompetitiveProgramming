// Los Chentes
//   ┌─┐
//   ┴─┴
//  ಠ_ಠ

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
{
    lli t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        string a , b, c;
        cin >> a >> b;
        sort(a.begin(),a.end());
        sort(b.begin(), b.end());

        int shorterSize;
        if (n < m) {
            shorterSize = n;
        } else {
            shorterSize = m;
        }

        int aChange, bChange, i, j;
        aChange = bChange = i = j = 0;
        
        while (i < n && j < m) {
            if (bChange == k ||
            (a[i] < b[j] && aChange < k)) {
                c += a[i++];
                aChange++;
                bChange = 0;
            } else {
                c += b[j++];
                bChange ++;
                aChange = 0;
            }
        }
        cout << c << endl;
    }
 
    return 0;
}