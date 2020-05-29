#include <iostream>
using namespace std;

int main() {
  int arr[1000], i, n;
  cin >> n;
  for (i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int b[1000];
  for (i = 0; i < n; i++) {
    b[i] = arr[n - 1 - i];
  }
  for (i = 0; i < n; i++) {
    cout << b[i] << "\t";
  }
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  return 0;
}
