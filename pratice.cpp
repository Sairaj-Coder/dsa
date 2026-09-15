#include<bits/stdc++.h>
using namespace std;

int hasPairWithDifference(vector<int>& A, int N, int B) {
    
    sort(A.begin(), A.end());
    int i=0;
    int j=N-1;
    while(i<j){
        int difference=abs(A[j]-A[i]);
      
        if(difference<B  || A[i]==0){
            i++;
        }
        else if(difference>B){
            j--;
        }
        else if(difference==B){
            return 1;
        }
        
    }
    return 0;
}
int main(){
    int N=4;
    vector<int>A={1 ,1 ,5, 8};
    int B=0;
    cout<<hasPairWithDifference(A,  N, B);
    return 0;
}