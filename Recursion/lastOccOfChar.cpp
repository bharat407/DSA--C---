#include <iostream>
using namespace std;

void lastOccTR(string &s, char x, int i, int &ans)
{
    if (i > s.size())
    {
        return;
    }
    if (s[i] == x)
    {
        ans = i;
    }
    lastOccTR(s, x, i + 1, ans);
}

int main()
{
    string s;
    cout << "enter the string :-  " << endl;
    cin >> s;
    char x;
    cout << "enter the character which want to be search :-  " << endl;
    cin >> x;
    int ans = -1;
    lastOccTR(s, x, 0, ans);
    cout << "Index of character :- " << ans << endl;
    return 0;
}
