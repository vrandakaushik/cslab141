#include<iostream>
using namespace std;
int main(){
int mark1;    // declare aall the marks obtained
int mark2;
int mark3;
int mark4;
int mark5;
cout<< "how much marks did the student scored in 5 subjects respectively ? "<< endl;
cin>>mark1>>mark2>>mark3>>mark4>>mark5;
float total = mark1+mark2+mark3+mark4+mark5;   //decalre the fuction to be applied
float average = total/5.0;
float percentage = total/100.0 *100.0;
cout<<"total marks obtained are "<<total<<endl;   //print all the reqd. results
cout<< "average marks obtained are "<< average<<endl;
cout<< "percentage of the student "<<percentage<<endl;
}
