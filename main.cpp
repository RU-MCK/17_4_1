#include <iostream>
using namespace std;

void swap(int &a, int &b) {
  int c = a;
  a = b;
  b = c;
}

int main() {
  int a = 10;
  int b = 20;
  cout << a << " " << b << endl;
  swap(a, b);
  cout << a << " " << b << endl;
}
