//include library
#include<iostream>
using namespace std;
int main (){
	//decalre the variables
	int a;
	//ask the value
	cout << "what is the value of a ? ";
	//input it
	cin>>a;
	int b= a%55;
	//define the condition
	if(b==0){ 
	cout <<a<< " is divisible by 5 and 11.";
	}
	else{
	cout<<a << " is not divible by 5 and 11. ";
	}
	//print the result
}
