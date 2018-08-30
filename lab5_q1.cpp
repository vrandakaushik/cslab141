//include library
#include<iostream>
using namespace std;
int main(){
	//declaration of the variables
	int a ;
	int b;
	//ask the values of a and b
	cout<< "what is the value of 'a' and 'b'?"<<endl;
	//input the values regarding a and b
	cin>> a >> b;
		//then define the condtions
		if(a>b) {
				cout<<a<<" is greater than "<<b<<endl;
		}
		else if(a==b){
				cout<<"both are equal"<<endl;
			}
     		else{
					cout<<b<<" is greater than "<<a<<endl;
		} 
		//print the result
}

