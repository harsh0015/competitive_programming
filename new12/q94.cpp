// C++ program to find the XOR of
// all elements in the array

#include <bits/stdc++.h>
using namespace std;

// Function to find the XOR of
// all elements in the array
int xorOfArray(int arr[], int n)
{
    // Resultant variable
    int xor_arr = 0;

    // Iterating through every element in
    // the array
    for (int i = 0; i < n; i++) {

        // Find XOR with the result
        xor_arr = xor_arr ^ arr[i];
    }

    // Return the XOR
    return xor_arr;
}

// Driver Code
int main()
{

    int arr[] = { 1,1,1,1,1,1,1,1,0 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout <<n<<endl;

    // Function call
    cout << xorOfArray(arr, n) << endl;

    return 0;
}
