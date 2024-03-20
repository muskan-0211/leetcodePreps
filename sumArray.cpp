#include <iostream>
using namespace std;

int getSum(int num[], int n) {
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += num[i];
  }
  return sum;
}

int main() {
  int size;
  cout << "Enter the size of the array: ";
  cin >> size;

  int num[100];
  cout << "Enter the elements: ";
  for (int i = 0; i < size; i++) {
    cin >> num[i];
  }

  cout << "Sum of array elements: " << getSum(num, size) << endl;
  return 0;
}
