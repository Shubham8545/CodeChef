#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--) {
        double K, N, count=0, score;
        cin>>N>>K;

        vector<double> S(N);
        for(double i=0;i<N;i++)
            cin>>S[i];

        sort(S.begin(), S.end(), greater<>());

        score=S[K-1];
        for(auto ele:S) {
            if(ele>=score)
                count++;
        }

        cout<<count<<endl;
    }
	return 0;
}