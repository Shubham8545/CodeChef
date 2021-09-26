#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>>T;

    while(T--) {
        long long N;
        cin>>N;
        long long A[N];
        for(long long i=0;i<N;++i)
            cin>>A[i];

        int B[N-1];
        for(long long i=0;i<N-1;++i)
            cin>>B[i];
        
        sort(A, A+N);
        sort(B, B+(N-1));

        long long d1, d2;
        map<long long, long long> X;
        for (long long i=0;i<N-1;++i){
            d1=B[i]-A[i];
            d2=B[i]-A[i+1];
            
            if(d1==d2){
                if (d1 > 0)
                    X[d1] += 1;
            }
            else
            {
                if (d1 > 0)
                    X[d1] += 1;
                if (d2 > 0)
                    X[d2] += 1;
            }
        }
        for (auto i : X){
            if (i.second == N-1){
                cout<<i.first<<endl;
                break;
            }
        }
    }
	return 0;
}