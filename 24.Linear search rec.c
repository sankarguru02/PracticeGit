/*
* Approach : The idea is to compare x with the last element in arr[].
* If an element is found at the last position, return it.
* Else recur elmntSrch() for remaining array and element x.
*/

#include <stdio.h>

// Recursive function to search x in arr[]
int elmntSrch(int arr[], int size, int x) {
	

	size--;

	if (size >= 0) {
		if (arr[size] == x)
			return size;
		else
			 elmntSrch(arr, size, x);
	}
	else
		return -1;

	
}

int main(void) {
	int arr[] = {12, 34, 54, 2, 3};
	int size = sizeof(arr) / sizeof(arr[0]);
	int x = 2;
	int indx;

	indx = elmntSrch(arr, size, x);

	if (indx != -1)
		printf("Element %d is present at index %d", x, indx);
	else
		printf("Element %d is not present", x);

	return 0;
}

// This code is contributed by Manish Kumar (mkumar2789)

