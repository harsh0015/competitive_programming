// C++ program to illustrate
// prev_permutation example

// this header file contains prev_permutation function
#include <algorithm>

#include <iostream>
using namespace std;
int main()
{
	int arr[] = { 1, 2, 3,4,5,6,7,8 };

	sort(arr, arr + 8);
	reverse(arr, arr + 8);

	cout << "The 3! possible permutations with 3 elements:\n";
	do {
		cout << arr[0] << " " << arr[1] << " " << arr[2] << "\n";
	} while (prev_permutation(arr, arr + 8));

	cout << "After loop: " << arr[0] << ' ' << arr[1]
		<< ' ' << arr[2] << '\n';

	return 0;
}
