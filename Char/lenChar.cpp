#include <iostream>
#include <string.h>
using namespace std;
int getLength(char name[])
{
    int length = 0;
    int i = 0;

    while (name[i] != '\0')
    {
        length++;
        i++;
    }
    return length;
}

int main()
{
    char name[100];
    cout << "Enter your Name " << endl;

    cin >> name;

    cout << "Aapka naam: " << name << " hai " << endl;

    cout << "length of the name by using by kudh ka function :-  " << getLength(name) << endl;
    cout << "Length of the name by using predefine function for string -> " << strlen(name) << endl;

    return 0;
}