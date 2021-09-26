#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
 
long long lcm(long long a, long long b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
	long T;
    cin>>T;

    while(T--){
        long long N, M;
        cin>>N>>M;
        
        vector< pair <long long,long long> > S;
        
        for(long long i=0;i<M;i++) {
            long long x, y;
            cin>>x>>y;
            S.push_back(make_pair(x,y));
        }
        
        sort(S.rbegin(), S.rend());
        
        long long temp=1, sum=0, k;
        
        for(long long i=0;i<M;i++) {
            k = N/temp;
            temp = lcm(temp,S[i].second);
            sum += (k*S[i].first)-(S[i].first*(N/temp));
        }

        cout<<sum<<"\n";
    }
	return 0;
}