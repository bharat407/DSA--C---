#include <iostream>
using namespace std;
bool isPalindrome(string &s, int start, int end)
{
  // Base Case
  if (start >= end)
  {
    return true;
  }
  // ek Case
  if (s[start] != s[end])
  {
    return false;
  }

  // bki ka recursion sambal lega
  return isPalindrome(s, start + 1, end - 1);
}

int main()
{
  string s;
  cout << "enter the string :- ";
  cin >> s;
  cout << isPalindrome(s, 0, s.size() - 1) << endl;
  return 0;
}
