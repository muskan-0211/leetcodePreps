#include <iostream>
#include <vector>
using namespace std;

int linearSearch(int n, int num, vector<int> &arr) {
  for (int i = 0; i < n; i++) {
    if (arr[i] == num) {
      return i; // Return the index where the element is found
    }
  }
  return -1; // Return -1 if the element is not found
}

int main() {
  vector<int> arr = {2, 4, 6, 8, 10};
  int n = arr.size();
  int num = 6;
  int index = linearSearch(n, num, arr);
  if (index != -1) {
    cout << "Element " << num << " found at index: " << index << endl;
  } else {
    cout << "Element " << num << " not found in the array." << endl;
  }
  return 0;
}
