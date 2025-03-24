#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) { cin >> a[i]; }
    int count = 0;
   
  for(int i=0;i<n;i++){
      if(a[i]==i+1)count++;
  }
  count = (count+1)/2;   
  cout << count << endl;
  }
}