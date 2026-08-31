#include <bits/stdc++.h>
using namespace std;

/*
===== VECTOR OF VECTORS NOTES =====

1. DECLARATION METHODS:
   - vector<int> arr[3];              // Array of 3 vectors (VLA - non-standard)
   - vector<vector<int>> arr(3);      // Vector of 3 vectors (Standard C++)

2. WHAT IS vector<int> arr[3]?
   - Creates an ARRAY of vectors
   - Fixed size: can only use arr[0], arr[1], arr[2]
   - arr[3] throws ERROR (out of bounds)
   - VLA (Variable-Length Array) - non-standard in C++
   - Stack allocated

3. WHAT IS vector<vector<int>> arr(3)?
   - Creates a VECTOR of vectors
   - Dynamic size: can add more vectors with push_back()
   - Can resize: arr.resize(5), arr.push_back(...)
   - Standard C++ (portable)
   - Heap allocated

4. COMPARISON TABLE:
   ┌──────────────────────┬──────────────────────┐
   │ vector<int> arr[3]   │ vector<vector<int>>  │
   ├──────────────────────┼──────────────────────┤
   │ Fixed size 3         │ Dynamic, resizable   │
   │ Non-standard (VLA)   │ Standard C++         │
   │ Stack allocated      │ Heap allocated       │
   │ arr[3] = ERROR       │ arr[3] = OK          │
   │ Less flexible        │ More flexible        │
   └──────────────────────┴──────────────────────┘

5. EXAMPLE STRUCTURE:
   arr[0] → [1, 2, 3]
   arr[1] → [9, 8, 7]
   arr[2] → [16, 61, 12]

   Each vector can have DIFFERENT number of elements

6. COMMON OPERATIONS:
   - Access: arr[i][j]
   - Add element: arr[i].push_back(value)
   - Get size: arr[i].size()
   - Print: use nested loops

7. PRINTING METHODS:

   Method 1: Traditional loops
   for(int i = 0; i < 3; i++){
       for(int j = 0; j < arr[i].size(); j++){
           cout << arr[i][j] << ",";
       }
       cout << endl;
   }

   Method 2: Range-based for loops (cleaner)
   for(auto& vec : arr){
       for(int x : vec){
           cout << x << " ";
       }
       cout << endl;
   }

8. WHY arr[3].push_back(14) THROWS ERROR?
   - arr[3] — array of vectors declared with size 3
   - Valid indices: 0, 1, 2 only
   - arr[3] is OUT OF BOUNDS
   - Causes undefined behavior / crash

9. BEST PRACTICE FOR COMPETITIVE PROGRAMMING:
   USE: vector<vector<int>> arr(n);
   - Standard and portable
   - Flexible and dynamic
   - Works with any compiler

*/

int main()
{
    // Example 1: Array of vectors (non-standard)
    vector<int> arr[3];
    arr[0].push_back(1);
    arr[0].push_back(2);
    arr[0].push_back(3);
    arr[1].push_back(9);
    arr[1].push_back(8);
    arr[1].push_back(7);
    arr[2].push_back(16);
    arr[2].push_back(61);
    arr[2].push_back(12);

    // WRONG: arr[3].push_back(14);  // ERROR - out of bounds!

    cout << "=== Printing vector array ===" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << ",";
        }
        cout << endl;
    }

    cout << "\n=== Using range-based loops ===" << endl;
    for (auto &vec : arr)
    {
        for (int x : vec)
        {
            cout << x << " ";
        }
        cout << endl;
    }

    cout << "\n=== BETTER: Using vector<vector<int>> ===" << endl;
    vector<vector<int>> better_arr(3);
    better_arr[0] = {1, 2, 3};
    better_arr[1] = {9, 8, 7};
    better_arr[2] = {16, 61, 12,5};
    cout<<"sairaj"<<endl;
    // This works! Can add more vectors dynamically
    better_arr.push_back({14, 15, 16}); // arr[3] now exists

    for (auto &vec : better_arr)
    {
        for (int x : vec)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    better_arr.push_back({11, 12, 53});
    cout << "======Tradiational way to print vector of vector" << endl;
    for (auto i = 0; i < better_arr.size(); i++)
    {
        for (int j = 0; j < better_arr[i].size(); j++)
        {

            cout << better_arr[i][j] << ",";
        }
        cout << endl;
    }
    cout << "declaring array of array known as 2d array" << endl;
    string rowcolunm_arr[2][3] = {
        {"sai", "raj", "shirole"},
        {"sai", "raj", "shirole"},//no need of this extr comma
        };
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<rowcolunm_arr[i][j]<<",";
        }
        cout<<endl;
    }
    cout<<"Vector of array"<<endl;
    vector<array<int, /*SIZE*/2>> name;
    //here we can increase size of vector but array size is fixed
    name.push_back({1,21});
    name.push_back({11,2});
    for (int i = 0; i < name.size(); i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout<<name[i][j]<<",";
        }
        cout<<endl;
    }
    
    

    return 0;
}