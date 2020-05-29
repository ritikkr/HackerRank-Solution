#include <iostream>
using namespace std;
int main() {
  int i;
  unsigned long long int sum[6], add = 0;
  unsigned long long int a[10];
  for (i = 0; i < 5; i++) {
    cin >> a[i];
  }
  for (i = 0; i < 5; i++) {
    if (a[i] < 1 || a[i] > 1000000000) {
      exit(0);
    } else {
      for (i = 0; i < 5; i++) {
        add = add + a[i];
      }
      for (i = 0; i < 5; i++) {

        sum[i] = add - a[i];
      }
      long long int min = 0;
      if (sum[0] < sum[1] && sum[0] < sum[2] && sum[0] < sum[3] &&
          sum[0] < sum[4]) {
        min = sum[0];
      } else if (sum[1] < sum[0] && sum[1] < sum[2] && sum[1] < sum[3] &&
                 sum[1] < sum[4]) {
        min = sum[1];
      } else if (sum[2] < sum[1] && sum[2] < sum[0] && sum[2] < sum[3] &&
                 sum[2] < sum[4]) {
        min = sum[2];
      } else if (sum[3] < sum[1] && sum[3] < sum[2] && sum[3] < sum[0] &&
                 sum[3] < sum[4]) {
        min = sum[3];
      } else {
        min = sum[4];
      }
      cout << min;
      long long int max = 0;
      if (sum[0] > sum[1] && sum[0] > sum[2] && sum[0] > sum[3] &&
          sum[0] > sum[4]) {
        max = sum[0];
      } else if (sum[1] > sum[0] && sum[1] > sum[2] && sum[1] > sum[3] &&
                 sum[1] > sum[4]) {
        max = sum[1];
      } else if (sum[2] > sum[1] && sum[2] > sum[0] && sum[2] > sum[3] &&
                 sum[2] > sum[4]) {
        max = sum[2];
      } else if (sum[3] > sum[1] && sum[3] > sum[2] && sum[3] > sum[0] &&
                 sum[3] > sum[4]) {
        max = sum[3];
      } else {
        max = sum[4];
      }
      cout << " " << max;
    }
  }
}
