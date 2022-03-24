
//failed this in contest -- look into why?



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
        int n = stoi(s);

        int counter = 0;
        string s2;
        for (int x = 0; x < s.size(); x++) {
            counter = counter + (int)(s.at(x) - '0');
        }
        int changer = (9 - (counter%9))%9;
        int pot = pow(10, (s.size()));
        int ans = 0;
        bool one = true;
        for (int x = 0; x < s.size(); x++) {
            if (changer < (int)(s.at(x) - '0') && one == true) {
                ans = ans + changer * pot;
                pot = pot / 10;
                ans = ans + (s.at(x) - '0')*pot;
                pot = pot / 10;
                one = false;
            }
            else {
                ans = ans + (s.at(x) - '0')*pot;
                pot = pot / 10;
            }
        }
        if (one) {
            ans = ans + changer * pot;
        }
        cout << "Case #" << i << ": " << ans << endl;
        
        

    }


    
}
