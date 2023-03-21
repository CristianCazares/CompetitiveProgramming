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

void binaryStride(lli& n, vector<lli>& a, lli& target){
    lli pow = log2(n);
    lli pos = -1;
    for (lli i = pow; i >= 0; i--){
        lli step = 1 << i;
        
        if(pos + step < n && target >= a[pos+step]){
            pos += step;
        }
    }

    if(a[pos] == target) {
        print(1)        
    } else {
        print(0)
    }
}
int main(){
    //Handle input
    lli n;
    cin >> n;
    vector<lli> a(n);
    for (lli i = 0; i < n; i++) {
        cin>>a[i];
    }

    lli q;
    cin >> q;
    vector<lli> k(q);
    for (lli i = 0; i < q; i++){
        cin >> k[i];
    }
    
    //Search on input
    for (lli i = 0; i < k.size(); i++) {
        binaryStride(n, a, k[i]);
    }

    return 0;
}   