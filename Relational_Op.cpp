//this program for a Relational operator in this program answer in 0 or 1 form means true or false 
#include<iostream>
using namespace std;
int main(){
	
	int z;
	z=(10==20);//== equal to a==b the anser is 1 otherwise 0
	cout<<z<<endl;
	
	z=(10!=20);//not equal to a!=b the anser is 1 otherwise 0
	cout<<z<<endl;
	
	//<,>,=>,=<,is a greater ,greter than is value is when condition is true then a else false means answer is 0
	z=(10>20) ;
	cout<<z<<endl;
	
	z=(10<20);
	cout<<z<<endl;
	
	z=(10>=20);
	cout<<z<<endl;
	
	z=(10<=20);
	cout<<z<<endl;
	
	return 0;
}

/*
OUTPUT::
	0
	1
	0
	1
	0
	1

*/
