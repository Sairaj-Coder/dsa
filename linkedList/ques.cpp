// 1
// 3 3 10
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,m,k;
	cin>>t;
	while(t--){
	    cin>>n>>m>>k;
	    for(int i=1;i<=(n*m);i++){
            if((n==m) and (n*m)>=k){
                cout<<(n*m)-(n*i)<<endl;
                break;
            }
	        if((n*m)<k){
	            cout<<0<<endl;
                break;
	            
	        }
	        if(k==0){
	            cout<<(n*m)<<endl;
	            break;
	        }
	        
	        else if((n*i)>=k){
	            cout<<(n*m)-(n*i)<<endl;
	            break;
	        }
	        else if((m*i)>=k){
	            cout<<(n*m)-(m*i)<<endl;
	            break;
	        }
	       
	        
	    }
	    
	}

}