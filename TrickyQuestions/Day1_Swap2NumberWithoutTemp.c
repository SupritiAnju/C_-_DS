/* Day 1 : Q. Write a C/C++ program that swaps two numbers without using a temporary variable. */

#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 7;
    cout << "Before swapping: a = " << a << ", b = " << b << endl;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << "After swapping: a = " << a << ", b = " << b << endl;
    return 0;
}
/* Soultion explanantion : There are multiple ways to swap two numbers without using a temporary variable. One of the most popular methods is using bitwise XOR operator */
/* 
Bitwise XOR operator is used in swapping two numbers without using a third variable in C/C++ because it can help to preserve the values of the two variables while performing the swap.

The trick to swapping two numbers using bitwise XOR is based on the fact that XOR operation is commutative and associative. This means that a ^ b ^ b is equal to a and a ^ b ^ a is equal to b.

Here's an example to illustrate this:

Let's say we have two variables a and b, and we want to swap their values without using a third variable.

a = 5;    // binary: 00000101
b = 7;    // binary: 00000111
Using bitwise XOR, we can swap the values of a and b as follows:

a = a ^ b;   // a = 00000010 (binary)
b = a ^ b;   // b = 00000101 (binary)
a = a ^ b;   // a = 00000111 (binary)
After executing these three lines of code, the value of a will be equal to the original value of b, and the value of b will be equal to the original value of a. Thus, we have successfully swapped the values of a and b without using a third variable.

This method of swapping two numbers using bitwise XOR is more efficient than using a temporary variable, as it requires fewer memory operations.
*/