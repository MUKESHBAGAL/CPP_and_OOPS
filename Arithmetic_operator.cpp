#include<iostream>
using namespace std;
int main(){
	int num,num1,num2;
	cout<<"Enter 1st Number :";//using the cout keyword as is print in double inverted comma
	cin>>num1;//here we store the value of num1
	cout<<"Enter 2nd Number :";
	cin>>num2;
	
	num=num1+num2;//here perform operation num1=num1+num2
	cout<<"The sum Arthmetic operator:"<<num<<endl;
	
	num=num1-num2;//here perform operation num1=num1-num2
	cout<<"The Subtract Arthmetic operator:"<<num<<endl;
	
	num=num1*num2;//here perform operation num1=num1*num2
	cout<<"The Multiply Arthmetic operator:"<<num<<endl;
	
	num=num1/num2;//here perform operation num1=num1/num2
	cout<<"The Division Arthmetic operator:"<<num<<endl;
	
	num=num1%num2;//here perform operation num1=num1%num2
	cout<<"The Modulus Arthmetic operator:"<<num<<endl;
	
	return 0;	
}


/*
OUTPUT::
	Enter 1st Number :15
	Enter 2nd Number :2
	
	The sum Arthmetic operator:17
	The Subtract Arthmetic operator:13
	The Multiply Arthmetic operator:30
	The Division Arthmetic operator:7
	The Modulus Arthmetic operator:1


*/
