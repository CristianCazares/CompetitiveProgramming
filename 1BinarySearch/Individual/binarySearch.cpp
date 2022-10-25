// ¢: ¢ristian ¢ázares
// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP2_6_A

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


void binarySearch(lli n, vector<lli> a, lli target){
    cout << "Looking for: " << target << endl;
    lli l =- 1, r = n;
    while(l < r) {
        lli mid = (l + r) / 2;

        if(target > a[mid]) {
            l = mid;
        } else {
            r = mid - 1;
        }
    }
    print(l);
}

int main() {

    //Handle input
    lli n;
    cin >> n;
    vector<lli> a(n);
    for (lli i = 0; i < n; i++) {
        cin>>a[i];
    }

    lli q;
    cin >> q;

    binarySearch(n, a, q);

    /*vector<lli> k(q);
    for (lli i = 0; i < q; i++){
        cin >> k[i];
    }*/




    return 0;
}