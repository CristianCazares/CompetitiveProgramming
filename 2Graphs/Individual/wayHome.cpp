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

void bfs(lli& n, lli& d, vector<bool>& lilies, vector<bool>& visited, vector<lli>& distances, queue<int>& q){
    //Iterative BFS
    visited[0] = true;
    distances[0] = 0;
    q.push(0);
    while (!q.empty()) {
        lli current = q.front();
        q.pop();
        for (lli i = 0; i < d; i++){
            int child = current + i + 1;
            if (child < n && lilies[child] && !visited[child]) {
                visited[child] = true;
                distances[child] = distances[current] + 1;
                q.push(child);
                if (child == n - 1) {
                    return;
                }
            }
        }
    }
}

int main() {
    lli n, d;
    string s;
    cin >> n >> d;
    cin >> s;

    vector<bool> lilies(n), visited(n);
    vector<lli> distances(n);
    queue<int> q;

    for (lli i = 0; i < s.length(); i++){
        if (s[i] == '1') {
            lilies[i] = true;
        } else {
            lilies[i] = false;
        }
    }
    bfs(n, d, lilies, visited, distances, q);
    if (!visited[n - 1]){
        cout << "-1" << endl;
    }
    else{
        cout << distances[n - 1] << endl;
    }

    return 0;
}