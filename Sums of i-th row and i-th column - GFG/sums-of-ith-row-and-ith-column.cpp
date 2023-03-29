//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int sumOfRowCol(int N, int M, vector<vector<int>> A) {
        int sum1=0,sum2=0,k=0;
        bool a=false;
        int i=0,p=0;
        while(k<N){
        for(int j=0;j<M;j++){
            sum1=A[i][j]+sum1;
        }
        for(int i=0;i<N;i++){
            sum2=A[i][p]+sum2;
        }
        if(sum1!=sum2){
          return 0;  
        }
            k++;
            sum1=0;
            sum2=0;
            i++;
            p++;
        }
        return 1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin >> N >> M;
        vector<vector<int>> A(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> A[i][j];
        Solution ob;
        cout << ob.sumOfRowCol(N, M, A) << "\n";
    }
}
// } Driver Code Ends