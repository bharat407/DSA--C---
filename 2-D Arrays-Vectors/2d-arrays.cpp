#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int rows, cols;
    cout << "Enter the value of rows : ";
    cin >> rows;
    cout << "Enter the value of cols : ";
    cin >> cols;
    vector<vector<int>> arr(rows, vector<int>(cols, -101));
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}