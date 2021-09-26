#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    
	int T;
    cin>>T;

    while(T--){
        int N, M, X;
        cin>>N>>M>>X;
        
        vector< pair <int,int> > A(N);
        for(int i=0;i<N;i++){
            cin>>A[i].first;
            A[i].second=i+1;
        }
        
        int k=0;
        
        vector<int> ans;
        for(int i=0;i<N;++i){
            if(A[i].first>=M){
                A[i].first=-1;
                ans.push_back(A[i].second);
                k++;                
            }
        }

        sort(A.rbegin(), A.rend());
        
        for(int i=0;k<X;i++){
            ans.push_back(A[i].second);
            k++;
        }
        
        cout<<k<<" ";
        sort(ans.begin(),ans.end());
        for(int i=0;i<k;i++){
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
    }
	return 0;
}