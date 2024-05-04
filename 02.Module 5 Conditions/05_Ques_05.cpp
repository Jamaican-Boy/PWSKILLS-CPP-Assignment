// Q5. WAP to find the difference between ASCII of two characters ,take them as
// input .

#include <cmath>
#include <iostream>

using namespace std;

int main() {
  char ch1, ch2;

  cout << "Enter the first character: ";
  cin >> ch1;
  cout << "Enter the second character: ";
  cin >> ch2;

  int diff = ch1 - ch2;
  cout << "ASCII difference (" << ch1 << " - " << ch2 << ") is: " << abs(diff)
       << endl;

  return 0;
}
