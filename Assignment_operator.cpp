#include<iostream>
using namespace std;
int main(){
	int num1,num2;
	cout<<"Enter 1st Number :";//using the cout keyword as is print in double inverted comma
	cin>>num1;//here we store the value of num1
	cout<<"Enter 2nd Number :";
	cin>>num2;
	
	num1+=num2;//here perform operation num1=num1+num2
	cout<<"The sum Assignment operator:"<<num1<<endl;
	
	num1-=num2;//here perform operation num1=num1-num2
	cout<<"The Subtract Assignment operator:"<<num1<<endl;
	
	num1*=num2;//here perform operation num1=num1*num2
	cout<<"The Multiply Assignment operator:"<<num1<<endl;
	
	num1/=num2;//here perform operation num1=num1/num2
	cout<<"The Division Assignment operator:"<<num1<<endl;
	
	num1%=num2;//here perform operation num1=num1%num2
	cout<<"The Modulus Assignment operator:"<<num1<<endl;
	
	return 0;	
}


/*
OUTPUT::
	Enter 1st Number : 5
	Enter 2nd Number : 2
	
	The sum Assignment operator:7
	The Subtract Assignment operator:5
	The Multiply Assignment operator:10
	The Division Assignment operator:5
	The Modulus Assignment operator:1

*/
