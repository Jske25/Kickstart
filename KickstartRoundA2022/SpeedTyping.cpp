#include <bits/stdc++.h>
using namespace std;

#define pii pair<int, int>
#define vi vector<int>
#define vvi vector<vi>
#define mi map<int, int>
#define PB push_back
#define MP make_pair
#define FOR(i, a, b) for (int i = a; i <=b; ++i)
#define f first
#define s second
#define int long long

void setIO(string name = "") {
    ios_base::sync_with_stdio(0); cin.tie(0);
    
    if ((int)(name).size()) {
        freopen((name+".in").c_str(), "r", stdin);
        freopen((name+".out").c_str(), "w", stdout);
    }   
}


signed main()
{
    setIO("");

    int t; cin >> t;
    for (int i = 1; i <= t; i++) {
        string s; cin >> s;
        string s2; cin >> s2;
        int cnt = 0;
        int breaker = 0;
        bool ans = false;
        for (int x = 0; x < s2.size(); x++) {
            if (s2.at(x) == s.at(cnt)) {
                cnt++;
                breaker++;
            }
            if (breaker == s.size()) {
                ans = true;
                break;
            }
        }
        if (ans) {
            cout << "Case #" << i << ": " << s2.size() - s.size() << endl;
        }
        else {
            cout <<  "Case #" << i << ": " << "IMPOSSIBLE" << endl;
        }

    }
}
