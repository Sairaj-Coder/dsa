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
    int n=14;
    int arr[n]={100, 102, 100, 101, 101, 4, 3, 2, 3, 2, 1, 1, 1, 2};
    sort(arr,arr+n);
    // [1, 1, 1, 2, 2, 2, 3, 3, 4, 100, 100, 101, 101, 102]
    int cnt=1;
    int num=arr[0];
    int length=1;
    for (int i = 1; i < n; i++)
    {
        if(arr[i]==num+1){
            cnt++;
            num=arr[i];
        }
        else{
            length=max(length,cnt);
            cnt=0;
        }
    }
    cout<<length<<endl;
    return 0;
}
