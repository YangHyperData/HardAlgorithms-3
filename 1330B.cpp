/* YangStone Come To Play */

#include <vector>
#include <bits/stdc++.h>
#include <conio.h>
#include <algorithm>
using namespace std;

#define RFOR(i, a, b) for (int(i) = (a) - 1; (i) >= (b); --(i))
#define nl << '\n'
#define vti vector<int>
#define vtll vector<long long>
#define yep cout << "YES" nl
#define nope cout << "NO" nl
#define ll long long
#define lg long
#define db double
#define scanv(x)      \
	for (auto &i : x) \
	cin >> i
// #define MOD 998244353
#define dbg(x)         \
	cerr << #x << " "; \
	_print(x);         \
	cerr << endl;
#define pb push_back
#define bg begin()
#define ed end()
#define rbg rbegin()
#define red rend()
#define dbg(x...)        \
	cerr << #x << " : "; \
	_print(x)
#define uceil(a, b) ((a + b - 1) / (b))
#define dbg(...)
#define RFOR(i, a, b) for (int(i) = (a) - 1; (i) >= (b); --(i))
#define sp << " "
#define fr(i, l, r) for (int i = l; i <= r; i++)
#define FOR(i, a, b) for (int(i) = (a); (i) < (b); ++(i))
#define fl(i, r, l) for (int i = r; i >= l; i--)
#define wh while
#define fat(x, a) for (auto &x : a)
#define srt(x) sort(x.bg, x.ed)
#define printall(a)       \
	for (auto &(i) : (a)) \
	cout << i << ' '
#define FOR(i, a, b) for (int(i) = (a); (i) < (b); ++(i))
#define nlp(i, n) for (int i = 0; i < (int)(n); ++i)
#define rsrt(x) sort(x.rbg, x.red)
#define all(r) r.begin(), r.end()
#define vi vector<int>
// const int MAXN = 4e5 + 5;
#define forn(i, n) for (int i = 0; i < int(n); ++i)
#define rall(r) r.rbegin(), r.rend()
#define fast_out()                    \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL)
// const int mod = 1e9 + 7;
// const int N = 1e5 + 10;
const ll INF = 1e9 + 7;
#define FORALL(i, a) for (auto &(i) : (a))
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
// void file() {freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);}
int bin_pow(int a, int b, int mod) // luy thua nhi phan
{
	if (b == 0)
		return 1;
	int tmp = bin_pow(a, b / 2, mod);
	if ((b & 1) == false)
	{
		return (tmp * tmp) % mod;
	}
	return (a * (tmp * tmp) % mod) % mod;
}

vector<int> factorize(int n)
{
	vector<int> res;
	for (int i = 2; i * i <= n; i++)
	{
		while (n % i == 0)
		{
			res.push_back(i);
			n /= i;
		}
	}
	if (n != 1)
		res.push_back(n);
	return res;
}
//* Delete
/*var a = document.querySelectorAll(".MJX_Assistive_MathML")
a.forEach(s=> s.remove())
*/
bool compare(string &a, string &b)
{
	return a + b > b + a;
}
bool isPerfectSquare(ll n)
{
	ll temp = sqrt(n);

	if (temp * temp == n)
		return true;
	return false;
}
bool check(char r)
{
	return (r == 'a' || r == 'e');
}
bool isPerfectSquare(int n)
{
	int rt = sqrt(n);
	return (rt * rt == n);
}
bool isPrime(int n)
{
	for (int i = 2; i * i <= n; ++i)
	{
		if (n % i == 0)
			return false;
	}

	return true;
}
const int SIZE = 200000;
int p[SIZE];
int ans[SIZE][2];
int ans_cnt;
bool judge(int a[], int n)
{
	static int used[SIZE + 1];
	for (int i = 1; i <= n; i++)
		used[i] = 0;
	for (int i = 0; i < n; i++)
		used[a[i]] = 1;
	for (int i = 1; i <= n; i++)
	{
		if (!used[i])
			return 0;
	}
	return 1;
}
bool judge(int len1, int n)
{
	return judge(p, len1) && judge(p + len1, n - len1);
}
void solve()
{
	ans_cnt = 0;
	int n;
	cin >> n;
	int ma = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> p[i];
		if (ma < p[i])
			ma = p[i];
	}
	if (judge(n - ma, n))
	{
		ans[ans_cnt][0] = n - ma;
		ans[ans_cnt++][1] = ma;
	}
	if (ma * 2 != n && judge(ma, n))
	{
		ans[ans_cnt][0] = ma;
		ans[ans_cnt++][1] = n - ma;
	}
	printf("%d\n", ans_cnt);
	for (int i = 0; i < ans_cnt; i++)
	{
		printf("%d %d\n", ans[i][0], ans[i][1]);
	}
}

int main()
{
	fast_out();

	int t = 1;
	cin >> t;

	wh(t--)
	{

		solve();
		// cout << endl;
	}

	return 0;
}