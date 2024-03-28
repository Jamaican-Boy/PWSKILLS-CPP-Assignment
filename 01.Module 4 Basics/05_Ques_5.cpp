/*Q5. Write a program to find the circumference of a circle with radius 10 in
 * C++.*/

#include <iostream>

using namespace std;

int main() {
  float pi = 3.14159;
  int radius = 10;

  float circumferenceOfCircle = 2 * pi * radius;

  cout << "The circumference of the circle with radius " << radius
       << " is: " << circumferenceOfCircle << endl;

  return 0;
}