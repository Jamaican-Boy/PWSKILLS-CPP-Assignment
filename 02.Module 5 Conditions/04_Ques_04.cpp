// Q4. WAP for finding the volume of the cylinder by taking radius and height as
// input.

#include <iostream>

using namespace std;

int main() {
  const double PI = 3.14159;
  int radius, height;

  cout << "Enter the radius: ";
  cin >> radius;
  cout << "Enter the height: ";
  cin >> height;

  float volumeOfCylinder = PI * (radius * radius) * height;

  cout << "The volume of the cylinder is: " << volumeOfCylinder << endl;

  return 0;
}