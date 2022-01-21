
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void swap(int *xps, int *dd)

{

int plate = *xps;

*xps = *dd;

*dd = plate;

}

// A function to use bubble sort
void Sbubble(int arrays[], int n, int &cmp, int &swaps)

{

swaps = cmp = 0;

int i, r;

for (i = 0; i < n - 1; i++)

// Last i elements are already in place

for (r = 0; r < n - i - 1; r++) {

cmp++;

if (arrays[r] > arrays[r + 1]) {

swaps++;

swap(&arrays[r], &arrays[r + 1]);

}

}

}
// //demonstrates the selectionSort function code
void Sselections(int arrays[], int n, int &cmp, int &swaps)

{

int i, j, min_idx;

swaps = cmp = 0;

// One by one move boundary of unsorted subarray

for (i = 0; i < n - 1; i++)

{

// Find the minimum element in unsorted array

min_idx = i;

for (j = i + 1; j < n; j++) {

cmp++;

if (arrays[j] < arrays[min_idx]) {

min_idx = j;

}

}

// Swap the found minimum element with the 1st element

swaps++;

swap(&arrays[min_idx], &arrays[i]);

}

}
//demonstrates the binarySearch function code
int binary(int arrays[], int l, int r, int x, int &cmp)

{

cmp = 0;

while (l <= r) {

int m = l + (r - l) / 2;

cmp++;

// Check if x is present at mid

if (arrays[m] == x)

return m;
// using if and else to find the greater and smaller of left and right half
// If x greater, ignore left half

if (arrays[m] < x)

l = m + 1;

// If x is smaller, ignore right half

else

r = m - 1;

}

// if we reach here, then element was

// not present

return -1;

}
//demonstrates the linearSearch function code
int linear(int arrays[], int n, int x, int &cmp)

{

cmp = 0;

int i;

for (i = 0; i < n; i++) {

cmp++;

if (arrays[i] == x)

return i;

}

return -1;

}

// main where all the code will be used.
// bring it from the function 

int main()

{

int cmp = 0, swaps = 0;

int array1[120], array2[120], array3[120];

for (int i = 0; i < 120; ++i)

array1[i] = i;

srand(time(NULL));

// assigning random values to array2 and array 3

for (int i = 0; i < 120; ++i)

{

array2[i] = array3[i] = rand() % 100;

}

// searching number present at index 93

linear(array1, 120, array1[110], cmp);
// finding the results linear search 
cout << "Number of comparisions in Linear Search: " << cmp << endl;

// searching number present at index 93
 
binary(array1, 0, 119, array1[110], cmp);
// finding the results binary search
cout << "Number of comparisions in Binary Search: " << cmp << endl;

Sbubble(array2, 120, cmp, swaps);
// finding the results comparisions bubble Sort
cout << "Number of comparisions in Bubble Sort: " << cmp << endl;
// finding the results swaps in bubble sort
cout << "Number of swaps in Bubble Sort: " << swaps << endl;


Sselections(array3, 120, cmp, swaps);
// finding the results comparisions selection sort.
cout << "Number of comparisions in Selection Sort: " << cmp << endl;


// finding the results swaps in selection sort.
cout << "Number of swaps in Selection Sort: " << swaps << endl;

return 0;

}// end of main method.

// end of code.
