#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi A(N);
  for (int i=0;i<N;i++) cin >> A[i];
  sort(A.begin(), A.end());
  map<int, int> M;
  for (int i=0;i<N-1;i++) {
    M[A[i+1]-A[i]]++;
  }
  pii ans = *M.begin();
  cout << ans.first << " " << ans.second << endl;
  return 0;
}
