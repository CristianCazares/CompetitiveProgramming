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

map<lli, lli> dpTable;

lli fib(lli i){
    if(i > 0 && i <= 2){
        return 1;
    }
    lli fib1 = i - 1;
    lli fib2 = i - 2;
    if (dpTable.find(fib1) != dpTable.end()){
        return dpTable[fib1];
    }

}

int main(){
    lli n;
    cin >> n;
    time_t start, end;
    time(&start);
    cout << fib(n) << endl;
    time(&end);

    double time = double(end - start);
    cout << "Runtime: " << fixed << time << setprecision(5);
    return 0;
}