#include<bits/stdc++.h>
using namespace std;

int main() {
	//cod
	
	int T;
	cin>>T;
	for(int t = 0; t < T; t++)
	{
	    int N;
	    cin>>N;
	    int A[N+1];
	    for(int i = 0; i < N; i++)
	    {
	        cin>>A[i];
	    }
	    A[N] = 999;
	    int i;
	    for(i=0; i<N;i++)
	    {
	        if(A[abs(A[i])] > 0)
	        {
	            A[abs(A[i])] = -A[abs(A[i])];
	        }
	        else
	        {
	            cout<<abs(A[i])<<" ";
	        }
	    }
	    for(i = 1; i <= N; i++)
	    {
	        if(A[i] > 0)
	            cout<<i;
	    }
	    cout<<endl;
	    
	 }
	return 0;
}
