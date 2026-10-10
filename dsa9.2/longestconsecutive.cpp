#include<bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int>& nums) {
    int n = nums.size();
    int length = 0;

    for (int i = 0; i < n; i++) {

        int x = nums[i];
        int counter = 1;

        while (true) {
            bool found = false;

            for (int j = 0; j < n; j++) {
                if (nums[j] == x + 1) {
                    x++;
                    counter++;
                    found = true;
                    break;
                }
            }

            if (!found)
                break;
        }

        length = max(length, counter);
    }

    return length;
}
int main(){
    int n=4;
    int arr[n]={1,0,1,2};
    sort(arr,arr+n);
    // [1, 1, 1, 2, 2, 2, 3, 3, 4, 100, 100, 101, 101, 102]
    int cnt=0;
    int maxcnt=0;
    // int length=1;
    for (int i = 0; i < n-1; i++)
    { 
        
        if(arr[i]+1 == arr[i+1]){
                cout<<arr[i]<<",";
                cnt++;
                maxcnt = max(cnt,maxcnt);
            }
            else{
                cnt=0;
            }

    }
    cout<<endl;
    cout<<maxcnt<<endl;
    return 0;
}
