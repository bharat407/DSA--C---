//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        
        map<long long int, int> prevSum;
        int maxLen = 0;
        long long sum = 0;
        for(int i=0; i<N; i++){
            
            sum += A[i];
            
            if(sum == K){
                maxLen = max(maxLen, i+1);
            }
            
            long long rem = sum - K;
            
            if(prevSum.find(rem) != prevSum.end()){
                
                int len = i - prevSum[rem];
                maxLen = max(maxLen, len);
                
            }
            
            if(prevSum.find(sum) == prevSum.end())
              prevSum[sum] = i;
            
        }
        
        return maxLen;
}
};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends
