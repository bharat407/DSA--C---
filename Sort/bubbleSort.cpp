#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // Time complexitiy for bubble o(n^2) Worst Case and Average Case complexitiy
    vector<int> arr{10, 1, 7, 6, 14, 9};
    int n = arr.size();
    // Bubble sort
    for (int i = 1; i < n; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swapped = true;
                swap(arr[j], arr[j + 1]);
            }
        }
        // Allready sorted array ki time complexitity
        // O(n) in Best Case
        if (swapped == false)
        {
            break;
        }
    }
    // printing
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}