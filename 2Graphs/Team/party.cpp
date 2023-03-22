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

lli n;
vector<vector<lli>> adj;
lli profMax = 0;

void dfs(lli a, lli prof)
{
    profMax = max(profMax, prof);
    for (lli i = 0; i < adj[a].size(); i++){
        dfs(adj[a][i], prof + 1);
    }
}
 
int main() {
    cin >> n;
    //Fill an adj matrix with inputs.
    // This adj matrix is representing a tree
    adj.resize(n + 1);
    for (int i = 1; i < n + 1; i++) {
        lli input;
        cin >> input;
        if(input == -1){
            input = 0;
        }
        adj[input].push_back(i);
    }
    //Add a root pseudo-node of '0' and count each level of the three
    /*
    Input:
        5 -1 1 2 1 -1
         0
      1     5
    2  4
    3
    Employee #1 and #5 have no manager (-1)
    Employee #2 and #4 have employee #1 as manager
    Employee #3 has employee #2 as manager

    The answer is the count of the levels of the tree without the root.
    */
    dfs(0, 0);
    cout << profMax;
 
    return 0;
}