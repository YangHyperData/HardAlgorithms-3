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
#define rsrt(x) sort(x.rbg, x.red)
#define all(r) r.begin(), r.end()
#define rall(r) r.rbegin(), r.rend()
#define fast_out()                  \
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

void solve()
{
  string a, b, c;
  cin >> a >> b >> c;
  char x = '.';
  for (int i = 0; i < 3; i++)
  {
    if (a[i] == b[i] && a[i] == c[i] && a[i] != '.')
    {
      x = a[i];
    }
  }
  if (a[0] == a[1] && a[0] == a[2] && a[0] != '.')
    x = a[0];
  if (b[0] == b[1] && b[0] == b[2] && b[0] != '.')
    x = b[0];
  if (c[0] == c[1] && c[0] == c[2] && c[0] != '.')
    x = c[0];
  if (a[0] == b[1] && a[0] == c[2] && a[0] != '.')
    x = a[0];
  if (c[0] == b[1] && c[0] == a[2] && c[0] != '.')
    x = c[0];
  if (x == '.')
    cout << "DRAW" nl;
  else
    cout << x << endl;
}

int main()
{
  fast_out();
  int t;
  cin >> t;
  wh(t--)
  {
    solve();
  }
}