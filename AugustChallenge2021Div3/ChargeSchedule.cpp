#include<bits/stdc++.h>
using namespace std;

bool sortbyfirst(const pair<int,pair<int, int>> &a,const pair<int,pair<int, int>> &b)
{
    return (a.first < b.first);
}

int main() {
	ios::sync_with_stdio(false);
    cin.tie(NULL);

	int Q;
    cin>>Q;

    while(Q--){
        int N;
        cin>>N;
        
        vector<tuple<int, int, int> > charge;
        
        int A[N], T[N];
        
        for(int i=0;i<N;i++)
            cin>>A[i];

        // int tmax=0;
        for(int i=0;i<N;i++) {
            cin>>T[i];
            // tmax=max(tmax,T[i]);
        }
        
        for(int i=0;i<N;i++)
            charge.push_back(make_tuple(A[i], T[i], i+1) );
        
        sort(charge.begin(), charge.end());
        
        // int tMax=tmax;
        int L=0;
        int count=0;
        for(int i=0;i<N;i++){
            if((get<1>(charge[i]))>=(L+get<0>(charge[i]))){
                // tmax-=get<0>(charge[i]);
                L+=get<0>(charge[i]);
                // if(tmax>0)
                //     count++;
                // else
                //     break;
                count++;
            }
            else
                continue;
        }
        cout<<count<<"\n";
        L=0;
        for(int i=0;i<N;i++){
            if((get<1>(charge[i]))>=(L+get<0>(charge[i]))){
                // tMax-=get<0>(charge[i]);
                
                // if(tMax>0)
                //     cout<<get<2>(charge[i])<<" "<<L<<" "<<L+get<0>(charge[i])<<"\n";

                // else
                //     break;
                cout<<get<2>(charge[i])<<" "<<L<<" "<<L+get<0>(charge[i])<<"\n";

                L+=get<0>(charge[i]);
            }
            else
                continue;
        }   
    }
	return 0;
}