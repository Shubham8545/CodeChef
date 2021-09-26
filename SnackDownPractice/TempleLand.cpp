#include<bits/stdc++.h>
using namespace std;

int main() {
    int S;
    cin>>S;
    while(S--) {
        int N, flag=0;
        cin>>N;
        vector<int> H(N);
        for(int i=0;i<N;i++)
            cin>>H[i];

        if(N%2!=0 && H[0]==1 && H[N-1]==1) {
            for(int i=0;i<N/2;i++) {
                if(H[i]==H[(N-1)-i] && H[i+1]-H[i]==1)
                    flag++;
                else
                    break;
            }
            if(flag==N/2)
                cout<<"yes"<<endl;
            else
                cout<<"no"<<endl;
        }
        else
            cout<<"no"<<endl;
    }
    return 0;
}