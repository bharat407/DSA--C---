#include <iostream>
#include <vector>
using namespace std;

int lastOcc(vector<int> arr, int target){
  int s=0;
  int e=arr.size()-1;
  int mid=s+(e-s)/2;
  int ans=-1;
  while(s<=e){
    if(arr[mid]==target){
      // ans store
      ans=mid;
      //  left search
      s=mid+1;
    }
     else if(target<arr[mid]){
      //left me search
      e=mid-1;
    }
    else if(target>arr[mid]){
       //right me search
      s=mid+1;
    }
  mid=s+(e-s)/2;
  }
  return ans;
}

int main() {
 vector<int> v{1,3,3,4,4,4,4,4,6,7};
 int target=4;
 int ans=lastOcc(v,target);
 cout<<"last occ is "<<ans<<endl;
  return 0;
}