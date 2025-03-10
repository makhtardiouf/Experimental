
/**
   Lists first few divisors of a number
   Makhtar Diouf
   $Id$
   c++ -g -std=c++11 divisors.cpp -o divisors  -I/usr/local/include/fxt/ -lfxt
*/
#include "malib/malib.hpp"
#include <bits/tinyfactors.h>
#include <bitset>

using namespace std;

int main() {
  int N = 0;

  string prompt = "Enter a number >1 to evaluate: ";
  cout << prompt;
  while (cin >> N) {
    if (N <= 1) {
      cout << "Try another number";
      continue;
    }
    // bitset<63> a(N);

    for (int i = 1; i <= N; i++) {

      // Limited to N <= 63
      if (is_tiny_factor(N, i))
        cout << i << " is a divisor of " << N << endl;
    }
    cout << prompt;
  }
  return 0;
}
