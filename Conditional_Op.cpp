//this program for a condition Operator 
//using the conditional properties we find the largest number
// "Condition ? expression 1 : expression 2" when condition is right is or true then print expression  1  else expression 2
//                       ^              ^
//                       |              |
//    			 |              |
//              condition true    condition  false

#include<iostream>
using namespace std;
int main(){
	
	float num1, num2, result;
	cout << "Enter 1st floating-point numbers: ";
	cin >> num1;
	cout << "Enter 2nd floating-point numbers: ";
	cin >> num2;
	result = (num1 > num2) ? num1 : num2;
	cout << "The larger number is " << result << endl;

	
	return 0;	
}

/*
OUTPUT::
	Enter 1st floating-point numbers: 52.1
	Enter 2nd floating-point numbers: 45.3
	The larger number is 52.1


*/
