#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long int T;
    cin>>T;

    while(T--) {
        int N, K;
        cin>>N>>K;

        int A[N];
        for(int i=0;i<N;++i)
            cin>>A[i];

        sort(A, A+N);

        for(int i=0;i<K;++i) {
            if(A[i] < 0) {
                A[i] *= (-1);
            }
        }

        sort(A, A+N);

        int sum=0;
        for(int i=N-1;i>=0;--i) {
            if(A[i] > 0)
                sum += A[i];
        }
        cout<<sum<<"\n";
    }
	return 0;
}