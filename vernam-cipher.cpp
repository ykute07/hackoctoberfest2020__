// Program to encrypt messsage using vernam cipher
#include<bits/stdc++.h>

using namespace std;
int main() {
  int t, n, i, j, k, sum = 0;
  string m;
  cout << "Message: ";
  cin >> m;
  string key;
  cout << "Key: ";
  cin >> key;
  int mod = key.size();
  j = 0;
  for (i = key.size(); i < m.size(); i++) {
    key += key[j % mod];
    j++;
  }
  string ans = "";
  for (i = 0; i < m.size(); i++) {
    ans += (key[i] - 'A' + m[i] - 'A') % 26 + 'A';
  }
  cout << "Encrypted message: " << ans << '\n';

  return 0;
}