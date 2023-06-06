#include<iostream>
using namespace std;

int add(int a, int b);

int main(){
    
    int a;
    cout << "enter the value of a :- ";
    cin >> a;

    int b;
    cout << "enter the value of b :- ";
    cin >> b;

    int sum = add(a, b);
    
    cout << "Sum is :- "<<sum << endl;
    return 0;
    
}

 int add(int a,int b){
     int result = a + b;
     return result;
 }