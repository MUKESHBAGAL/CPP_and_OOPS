//This program for a Logical Operator
//in this program && ==> logical AND, || ==> logical OR ,! ==> logical NOT
// This program answer in 0 and 1 when condtion is true then output is 1 else print 0
#include<iostream>
using namespace std;
int main(){
	int a,b,c,d;
	a=10,b=20,c=30;
	d=(a<b && b<c);// "condition1 && condition " when two condition is right then print is true means 1 else false 0
	cout<<"The output of a &&  is a : "<<d<<endl;
	
	d=(a>b || b<c);//"condition1 || condition " when two condition is false then print is false means 0 else true 1
	cout<<"The output of a ||  is a : "<<d<<endl;
	
	d=!(a>b);// !(condition true ) = false ,!(condition false ) = true 
	cout<<"The output of a !  is a : "<<d<<endl;
	
	
	return 0;
		
}

/*
OUTPUT::
	The output of a &&  is a : 1
	The output of a ||  is a : 1
	The output of a !  is a : 1

*/
