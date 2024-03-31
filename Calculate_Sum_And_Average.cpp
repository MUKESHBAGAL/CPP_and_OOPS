/*
   Program to calculate sum and
 average of n numbers without array
*/

#include<iostream>

using namespace std;

int main() {
    // delclare variables
    int i, n, num, sum = 0;
    float avg;

    // take input of number of elements
    cout << "Enter no of elements: ";
    cin >> n;

    // take input of numbers one by one
    // add each number to sum
    cout << "Enter " << n << " elements: ";
    for (i = 1; i <= n; i++) {
        cin >> num;
        sum = sum + num;
    }

    // calculate average
    avg = (float) sum / n;

    // display result
    cout << "Sum: " << sum << endl;
    cout << "Average: " << avg << endl;

    return 0;
}


/*

   Output:

          Enter no of elements: 7

          Enter 7 elements: 1294 10 5 3 5

          Sum: 48

          Average: 6.85714

*/

