#include <iostream>
#include<stdio.h>  //include the library for power function
#include<math.h>
using namespace std;
int main(){
int p;           // declare the wntities required to calculate
cout<<"what is the principle amount?"<<endl;
cin>>p;
int R;
int T;
cout<<" what is the rate of intrest in percentage  and for what time period in years  ?"<<endl;
cin>>R>>T;
double x = pow((1+R/100.0),T); //power function used
double compoundIntrest= p*x -p;
cout<<"then the compound intrest is " << compoundIntrest<<endl;   //print the result
}
