#include <iostream>
#include <vector>
using namespace std;

int findUnique(vector<int> arr) {
  int ans = 0;
  for (int i = 0; i < arr.size(); i++) {
    ans = ans ^ arr[i];
  }
  return ans;
}

int main() {
  int n;
  cout << "Enter the input :- "<<endl;
  cin >> n;
  vector<int> arr(n);
  cout << "Enter the elementz :- "<<endl ;
  // Taking input
  for (int i = 0; i < arr.size(); i++) {
    cin >> arr[i];
  }
  int unique = findUnique(arr);
  cout << "Unique Element is " << unique << endl;
  return 0;
}