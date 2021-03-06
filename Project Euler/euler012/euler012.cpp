#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

ll g(ll N) {
  ll ans = 1;
  for (ll i=2;i*i<=N;i++) {
    if (N%i==0) {
      int cur = 0;
      while (N%i==0) {
        cur++;
        N/=i;
      }
      ans *= (cur+1);
    }
  }
  if (N > 1) ans *= 2;
  return ans;
}

ll f(int x) {
  if (x%2) return g(x)*g((x+1)/2);
  return g(x/2)*g(x+1);
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int T; cin >> T;
  while (T--) {
    ll N; cin >> N;

    ll i = 1;
    while (f(i) <= N) i++;
    cout << i*(i+1)/2 << endl;
  }
  return 0;
}
