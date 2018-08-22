					//include library
#include<iostream>
using namespace std;



int main()
{
									//declare the variable for length
	int length;

	cout<<"what is the length that you want to convert?";
	cin>>length;
									//get the lenth and its value to be printed
	float meter=length/100.0;
	float kilometer=length/10000.0;
	cout<<"so your length is "<<length<<" and in meter the value is"<<meter<<" and the value in kilometer is "<<kilometer<<endl;
	return 0;
}












