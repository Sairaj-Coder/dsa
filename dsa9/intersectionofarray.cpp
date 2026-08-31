#include <bits/stdc++.h>
using namespace std;

vector<int> inter(int arr[], int arr2[], int n, int m)
{
    int i = 0;
    int j = 0;
    vector<int> temp;
    while (i < n && j < m)
    {
        if (arr[i] == arr2[j])
        {
            temp.push_back(arr[i]);
            i++;
            j++;
        }
        else
        {
            if (arr[i] < arr2[j]){i++;
            }
            else{ j++;
                }
        }
    }
    return temp;
}

int main()
{
    int n = 8;
    int m = 7;
    int arr[n] = {1, 2, 2, 3, 3, 4, 5, 6};
    int arr2[m] = {1, 1, 1, 1, 1, 3, 7};

    vector<int> intersection = inter(arr, arr2, n, m);
    for (auto it : intersection)
    {
        cout << it << ",";
    }

    return 0;
}