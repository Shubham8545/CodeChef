#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	int N,D,H;
	int A[N];
while(T--)
{
	    int level=0;
	    cin>>N>>D>>H;
        string result="NO";
	    for(int i=0;i<N;i++)
	    {
	        cin>>A[i];
	        if(A[i]>0)
	        level=level+A[i];
	        if(A[i]==0 && level>0)
	        {
	            if(level<D)
	            level=0;
	            else
	            level=level-D;
	            
	        }
            if(level>H)
	            result="YES";
	    }
	    
	    cout<<result<<endl;
	}
	return 0;
}