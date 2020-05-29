#include <math.h>
#include <iostream>
using namespace std;
#include <stdlib.h>
#include <string.h>

int main() {
  int a, b, i;
  cin>>a>>b;
  // Complete the code.
  if (b < 9) {

    if (a == 1) {
     cout<<"one\n";
    }
    if (a == 2) {
      cout<<"two\n";
    }
    if (a == 3) {
      cout<<"three\n";
    }
    if (a == 4) {
      cout<<"four\n";
    }
    if (a == 5) {
      cout<<"five\n";
    }
    if (a == 6) {
      cout<<"six\n";
    }
    if (a == 7) {
      cout<<"seven\n";
    }
    if (a == 8) {
      cout<<"eight\n";
    }
    if (a == 9) {
      cout<<"nine\n";
    }

    if (b == 1) {
      cout<<"one\n";
    }
    if (b == 2) {
      cout<<"two\n";
    }
    if (b == 3) {
      cout<<"three\n";
    }
    if (b == 4) {
      cout<<"four\n";
    }
    if (b == 5) {
      cout<<"five\n";
    }
    if (b == 6) {
      cout<<"six\n";
    }
    if (b == 7) {
      cout<<"seven\n";
    }
    if (b == 8) {
      cout<<"eight\n";
    }
    if (b == 9) {
     cout<<"nine\n";
    }
  }
  if (b > 9) {

    if (a == 1) {
      cout<<"one\ntwo\nthree\nfour\nfive\nsix\nseven\neight\nnine\n";
    }
    if (a == 2) {
      cout<<"two\nthree\nfour\nfive\nsix\nseven\neight\nnine\n";
    }
    if (a == 3) {
      cout<<"three\nfour\nfive\nsix\nseven\neight\nnine\n";
    }
    if (a == 4) {
      cout<<"four\nfive\nsix\nseven\neight\nnine\n";
    }
    if (a == 5) {
     cout<<"five\nsix\nseven\neight\nnine\n";
    }
    if (a == 6) {
      cout<<"six\nseven\neight\nnine\n";
    }
    if (a == 7) {
      cout<<"seven\neight\nnine\n";
    }
    if (a == 8) {
      cout<<"eight\nnine\n";
    }
    for (i = b - 9; i > 0; i--) {
      if ((b - i + 1) % 2 == 0) {
        cout<<"even\n";
      }
      if ((b - i + 1) % 2 != 0) {
        cout<<"odd\n";
      }
    }
  }

  return 0;
}
