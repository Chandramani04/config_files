{
  "cp templet": {
    "prefix": "boilerplate",
    "body": [
      "#include <bits/stdc++.h>",
      "using namespace std;",
      "",
      "/*-------------------------------------------------------------------*/",
      "#define fastio()                      \\",
      "    ios_base::sync_with_stdio(false); \\",
      "    cin.tie(NULL);                    \\",
      "    cout.tie(NULL)",
      "#define ll long long int",
      "#define pb emplace_back",
      "#define ff first",
      "#define ss second",
      "#define setbits __builtin_popcountll",
      "#define clz __builtin_clzll",
      "#define ctz __builtin_ctzll",
      "#define sz(x) ((ll)(x).size())",
      "#define all(x) (x).begin(), (x).end()",
      "#define reverse(x) (reverse(all(x)))",
      "#define pll pair<ll, ll>",
      "#define rep(i, a, n) for (ll i = a; i < (n); ++i)",
      "#define repo(i, a, b) for (ll i = a; i <= b; ++i)",
      "#define per(i, a, b) for (ll i = a; i >= b; i--)",
      "#define mp make_pair",
      "#define sum(a) (accumulate((a).begin(), (a).end(), 0ll))",
      "#define sorted(a) (sort((a).begin(), (a).end()))",
      "#define countx(v, x) (count(all(v), x))",
      "#define minel(a) (*min_element((a).begin(), (a).end()))",
      "#define maxel(a) (*max_element((a).begin(), (a).end()))",
      "#define maxidx(a) (max_element((a).begin(), (a).end()) - (a).begin())",
      "#define minidx(a) (min_element((a).begin(), (a).end()) - (a).begin())",
      "#define lb(a, x) (lower_bound((a).begin(), (a).end(), (x)) - (a).begin())",
      "#define ub(a, x) (upper_bound((a).begin(), (a).end(), (x)) - (a).begin())",
      "#define vll vector<ll>",
      "ll gcd(ll a, ll b)",
      "// 48-57 -> 0-9",
      "// 65-90 -> A-Z",
      "// 97-122 -> a-z",
      "/*",
      "    size_t found = str.find(str1);",
      "    if (found != string::npos)",
      "    auto index = str.find(targetstr , starting index , ending index)",
      "    to find in while string",
      "    auto index = str.find(target)",
      "*/",
      "{",
      "    if (b > a)",
      "    {",
      "        return gcd(b, a);",
      "    }",
      "    if (b == 0)",
      "    {",
      "        return a;",
      "    }",
      "    return gcd(b, a % b);",
      "}",
      "vector<ll> sieve(ll n)",
      "{",
      "    ll *arr = new ll[n + 1]();",
      "    vector<ll> vect;",
      "    for (ll i = 2; i <= n; i++)",
      "        if (arr[i] == 0)",
      "        {",
      "            vect.push_back(i);",
      "            for (ll j = 2 * i; j <= n; j += i)",
      "                arr[j] = 1;",
      "        }",
      "    return vect;",
      "}",
      "vll frequency(vll v)",
      "{",
      "    map<ll, ll> mp;",
      "    for (ll i = 0; i < sz(v); i++)",
      "    {",
      "        mp[v[i]]++;",
      "    }",
      "    vll ans;",
      "    for (auto x : mp)",
      "    {",
      "        ans.push_back(x.second);",
      "    }",
      "    return ans;",
      "}",
      "",
      "/*---------------------------Code Begins---------------------------------------*/",
      "void solve()",
      "{",
      "		$0",
      "}",
      "signed main()",
      "{",
      "    fastio();",
      "",
      "    ll testcase = 1;",
      "    cin >> testcase;",
      "    while (testcase--)",
      "        solve();",
      "}",
      ""
    ],
    "description": "cp templet"
  },

  "basic": {
    "prefix": "basic",
    "body": [
      "#include <bits/stdc++.h>",
      "using namespace std;",
      "signed main()",
      "{",
      "     $0",
      "}",
      ""
    ],
    "description": "basic"
  }
}
