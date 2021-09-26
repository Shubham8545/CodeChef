#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin>>T;

    while(T--) {
        int A[10];
        int team1_score=0, team2_score=0;
        for(int i=1;i<=10;i++)
            cin>>A[i];
        
        for(int i=1;i<10;i+=2)
            team1_score+=A[i];

        for(int i=2;i<=10;i+=2)
            team2_score+=A[i];

        if(team1_score==team2_score)
            cout<<"0"<<"\n";
        
        else if(team1_score > team2_score)
            cout<<"1"<<"\n";

        else
            cout<<"2"<<"\n";
    }
	return 0;
}