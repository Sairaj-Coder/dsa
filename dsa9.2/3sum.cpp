#include <bits/stdc++.h>
using namespace std;
// better approach
/*
 int n=6;
    int arr[n]={-1,0,1,2,-1,-4};
    int target=0;

    set<vector<int>>stt;
    for (int i = 0; i < n-2; i++)
    {
        // map<int,int>mpp;
        set<int>mpp;
        for (int j = i+1; j < n; j++)
        {
            int more= target- (arr[i]+arr[j]);
            auto it = mpp.find(more);
            if(it!=mpp.end()){
                cout<<arr[i]<<","<<arr[j]<<","<<more<<endl;
                vector<int>temp = {arr[i],arr[j],more};
                sort(temp.begin(),temp.end());
                stt.insert(temp);
            }
            mpp.insert(arr[j]);
        }

    }
    vector<vector<int>> ans(stt.begin(),stt.end());


*/
/*
void optimal3sum(){
   int n = 6;
  int arr[n] = {-2,-1,0,0,1,2};
   sort(arr, arr + n);
  int target = 0;
  int i = 0;
  while (i < n-2)
  {


      int j = i + 1;
      int k = n - 1;
     if(i>0 && arr[i]==arr[i-1]  ) {
          i++;
          continue;
     }
      while (j < k){

           int finalsum = arr[i] + arr[j] + arr[k];


          if (finalsum < target)
          {
              j++;
          }
          else if ((finalsum > target))
          {
              k--;
          }
          else
          {
              cout <<"Ans:" <<arr[i] << "," << arr[j] << "," << arr[k] << endl;

              j++;
              k--;
              while(j<k && arr[j]==arr[j-1]) j++;

          }
      }
      i++;

  }
  cout<<"done"<<endl;
}
  */
 /*
 void 4sum(){
    class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& arr, int target) {
    vector<vector<int>>ans;
    sort(arr.begin(), arr.end());
    int n=arr.size();
    int i = 0;
    while (i < n)
    {
        if (i > 0 && arr[i] == arr[i - 1])
        {
            i++;
            continue;
        }
        for (int j = i + 1; j < n; j++)
        {
            if (j > i+1 && arr[j] == arr[j - 1])
        {
        
            continue;
        }
            int x = j + 1;
            int y = n-1;

           

            while (x < y)
            {
                long long finalsum =(long long) arr[i] + arr[j] + arr[x] + arr[y];
                // finalsum = arr[i] + arr[j] + arr[x] + arr[y];
                // cout<<"finalsum:"<<finalsum<<endl;

                if (finalsum < target)
                {
                    x++;
                }
                else if ((finalsum > target))
                {
                    y--;
                }
                else
                {
                //     cout << "Ans:" << arr[i] << "," << arr[j] << "," << arr[x] << "," << arr[y] << endl;
                    vector<int>temp={arr[i], arr[j], arr[x] ,arr[y]};
                    ans.push_back(temp);
                    x++;
                    y--;
                    while (x < y && arr[x] == arr[x - 1])x++;
                }
            }
        }
        i++;
    }
    return ans;
    }     
};
 }*/
int main()
{
    int n = 6;
    int arr[n] = {-5, -4, -3, -1, 2, 5};
    //--->[-3,-1,0,4]
    sort(arr, arr + n);
    int target = 0;
    int i = 0;
    while (i < n)
    {
        if (i > 0 && arr[i] == arr[i - 1])
        {
            i++;
            continue;
        }
        for (int j = i + 1; j < n; j++)
        {
            if (j > i+1 && arr[j] == arr[j - 1])
        {
            i++;
            continue;
        }
            int x = j + 1;
            int y = n-1;

            int finalsum = arr[i] + arr[j] + arr[x] + arr[y];

            while (x < y)
            {

                finalsum = arr[i] + arr[j] + arr[x] + arr[y];
                // cout<<"finalsum:"<<finalsum<<endl;

                if (finalsum < target)
                {
                    x++;
                }
                else if ((finalsum > target))
                {
                    y--;
                }
                else
                {
                    cout << "Ans:" << arr[i] << "," << arr[j] << "," << arr[x] << "," << arr[y] << endl;

                    x++;
                    y--;
                    // while (x < y && arr[x] == arr[x - 1])x++;
                }
            }
        }
        i++;
    }

    cout << "done" << endl;

    return 0;
}