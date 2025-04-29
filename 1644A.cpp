#include <bits/stdc++.h>
using namespace std;

#define nl << '\n'
#define vti vector<int>
#define vtll vector<long long>
#define yep cout << "YES" nl
#define nope cout << "NO" nl
#define ll long long
#define lg long
#define db double
#define pb push_back
#define bg begin()
#define ed end()
#define rbg rbegin()
#define red rend()
#define sz size()
#define sp << " "
#define fr(i, l, r) for (int i = l; i <= r; i++)
#define fl(i, r, l) for (int i = r; i >= l; i--)
#define wh while
#define fat(x, a) for (auto &x : a)
#define srt(x) sort(x.bg, x.ed)
#define FOR(i, a, b) for (int(i) = (a); (i) < (b); ++(i))
#define rsrt(x) sort(x.rbg, x.red)
#define all(r) r.begin(), r.end()
#define rall(r) r.rbegin(), r.rend()
#define fast_out()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
const int mod = 1e9 + 7;

//* Luy Thua Nhi Phan
// int bin_pow(int a,int b,int mod)
// {
//     if(b==0)return 1;
//     int tmp=bin_pow(a,b/2,mod);
//     if((b&1)==false){
//         return (tmp*tmp)%mod;
//     }
//     return (a*(tmp*tmp)%mod)%mod;
// }
//* Delete
/*var a = document.querySelectorAll(".MJX_Assistive_MathML")
a.forEach(s=> s.remove())
*/

void solve()
{
    string s;
    cin >> s;
    bool green_key = false;
    bool red_key = false;
    bool blue_key = false;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'R')
        {
            if (!red_key)
            {
                cout << "NO" << endl;
                return;
            }
        }
        else if (s[i] == 'G')
        {
            if (!green_key)
            {
                cout << "NO" << endl;
                return;
            }
        }
        else if (s[i] == 'B')
        {
            if (!blue_key)
            {
                cout << "NO" << endl;
                return;
            }
        }
        else if(s[i] == 'r'){
            red_key = true;
        }
        else if(s[i] == 'b'){
            blue_key = true;
        }
        else if(s[i] == 'g'){
            green_key = true;
        }
    }
    cout << "YES" << endl;
}
int main()
{
    fast_out();
    int t = 1;
    cin >> t;
    wh(t--)
    {
        solve();
    }

    return 0;
}