#include <bits/stdc++.h>
using namespace std;

class Animal
{
    // state or property
private:
    int weight;

public:
    int age;
    string name;
    void eat()
    {
        cout << "Eating" << endl;
    }
    void sleep()
    {
        cout << "sleeping" << endl;
    }

    int getweight()
    {
        return weight;
    }
    void setweight(int w)
    {
        weight = w;
    }
};
int main()
{
    Animal ramesh;
    ramesh.age = 12;
    ramesh.name = "Lion";
    cout << ramesh.age << endl;
    cout << ramesh.name << endl;
    ramesh.eat();
    ramesh.sleep();
    ramesh.setweight(101);
    cout << ramesh.getweight() << endl;
    return 0;
}