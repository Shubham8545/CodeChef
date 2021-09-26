#include <iostream>
using namespace std;

double l(double a,double b){
    double ans;
    ans=(a-b)/a;
    return ans;
}

double r(double a,double b){
    double ans;
    ans=(a-b)/b;
    return ans;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    long long n;
	    cin>>n;
	    double a[n];
	    for(long long i=0;i<n;i++){
	        cin>>a[i];
	    }
	    long long count=0;
	    for(long i=0;i<n;i++){
	        for(long long j=0;j<n;j++){
	            if(j!=i){
	               // if(l(a[i],a[j])<r(a[i],a[j]))
	               if((a[i]-a[j])*(a[i]-a[j])>0)
	                count++;
	            }
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}