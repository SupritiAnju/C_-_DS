/*Day 2 Question: Write a program in C/C++ to find the largest and smallest number in an array of integers without using any standard library functions or sorting algorithms.*/
#include<stdio.h>
int main()
{
int a[] = {2,6,89,56,48,31};
int n = sizeof(a)/sizeof(a[0]);  // Number of elements in the array
int small = a[0], large = a[0];

for (int i = 1; i < n; i++) {
    if (a[i] < small) {
        small = a[i];
    }
    if (a[i] > large) {
        large = a[i];
    }
}

printf("small is %d, large is %d", small, large);
return 0;
}
/* 
In this version, we use a for loop to iterate through the array and compare each element with the current smallest and largest values. The variable n stores the number of elements in the array, which is calculated as the total size of the array divided by the size of a single element.

Another alternative approach is to use the std::min_element and std::max_element functions from the algorithm library in C++. Here is an example:
#include <algorithm>
#include <iostream>

int a[] = {2,6,89,56,48,31};
int n = sizeof(a)/sizeof(a[0]);

auto min_it = std::min_element(a, a+n);
auto max_it = std::max_element(a, a+n);

std::cout << "small is " << *min_it << ", large is " << *max_it << std::endl;
*/