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
    lli t;
    vector<string> tests;
    cin >> t;

    for (int i = 0; i < t; i++){
        string input;
        cin >> input;
        tests.pb(input);
    }

    for (auto test : tests){
        set<char> res;
        lli i = 1, occ = 1;
        for (int i = 1; i < test.size(); i++){
            if (test[i] != test[i - 1]) {
                if (occ == 1){
                    res.insert(test[i-1]);
                }
                occ = 0;
            }
            occ++;
        }
        if (occ == 1){
            res.insert(test[i-1]);
        }

        for (char c : res){
            cout << c;
        }
        cout << endl;
    }

    return 0;
}

/*
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
    lli t;
    vector<string> tests;
    cin >> t;

    for (int i = 0; i < t; i++){
        string input;
        cin >> input;
        tests.pb(input);
    }

    for (auto test : tests){
        set<char> res;
        lli i = 0, j = 1, reps = 0;
        while (i < test.length() - 1){
            if (test[i] != test[j]) {
                res.insert(test[i]);
            } else {
                while(test[j - 1] == test[j]){
                    j++;
                }
            }
            j++;
            i = j-1;
        }
        lli size = test.size();
        if (test[size - 1] != test[size - 2]){
            res.insert(test[size-1]);
        }
        for (auto& c : res){
            cout << c;
        }
        cout << endl;
    }

    return 0;
}
*/