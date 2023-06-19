#include<iostream>
using namespace std;
void reverse(string &s,int start,int end){
  //Base Case
  if(start>=end){
      return;
  }
    // ek Case
  swap(s[start],s[end]);
  // bki ka recursion sambal lega
  reverse(s,start+1,end-1);
}

int main()
{
    string s;
    cout<<"enter the string :- ";
    cin>>s;
    reverse(s,0,s.size()-1);
    cout<<"Reverse String is :- "<<s<<endl;
    return 0;
}
