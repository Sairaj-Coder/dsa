#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums = [ 1, 2, 3, 4 ];
    vector<int> sum;
    int n = nums.size();
    sum[0] = nums[0];
    for (int i = 1; i < n; i++)
    {
        sum[i] = sum[i - 1] + nums[i];
    }
}