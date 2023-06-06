#include <iostream>
#include <limits.h> 
using namespace std;
int main(){
    int arr[] = { 2, 4, 5, 6, 7, 1, 9, 3, 12 };
    int size = 9;
    //MAXIMUM NO
    int maxi = INT_MIN;
    for (int i = 0; i < size;i++){
        if(arr[i]>maxi){
            maxi = arr[i];
        }
    }
    cout << "Maximum number is " << maxi << endl;

//MINIMUM NO


    //  int mini = INT_MAX;
    // for (int i = 0; i < size;i++){
    //     if(arr[i]<mini){
    //         mini = arr[i];
    //     }
    // }
    // cout << "Minimum number is " << mini << endl;
    return 0;
}