#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--) {
        int N, count=0;
        cin>>N;
        int A[N], B[N];
        for(int i=0;i<N;i++)
            cin>>A[i];
        for(int i=0;i<N;i++)
            cin>>B[i];
        
        int temp=A[0];
        for(int i=0;i<N;i++) {
            if(B[i]<=temp)
                count++;
            temp=A[i+1]-A[i];
        }

        cout<<count<<endl;
    }
    return 0;
}