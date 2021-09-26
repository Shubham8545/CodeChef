#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--) {
        int N, time=0;
        cin>>N;
        vector<string>W(N);

        for(int i=0;i<N;i++) {
            cin>>W[i];
        }

        for(int j=0;j<N;j++) {
            time+=2;
            for(int i=1;i<sizeof(W[j]);i++) {
                if((W[j][i]=='d' || W[j][i]=='f') && (W[j][i-1]=='j' || W[j][i-1]=='k'))
                    time+=2;
                else if((W[j][i]=='j' || W[j][i]=='k') && (W[j][i-1]=='d' || W[j][i-1]=='f'))
                    time+=2;
                else 
                    time+=4;
            }
            cout<<W[j]<<"  "<<time<<endl;
            time=0;
        }
    }
    return 0;
}