#include<iostream>
using namespace std;
int main(){
//declare variable
int days ;
//print the reqd. question
cout<<"what are the number of days that you want to convert into weeks? ";

//enter the value
cin >>days;

//define variable with conversion value
float weeks = days /7.0;
float years =days /365.0; 
//print the result
cout<<"the number of weeks constituting "<<days<< " days is "<<
weeks<< " and the number of years containing " << days << "days is "<<years<< endl;

return 0;
}
