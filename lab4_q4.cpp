# include<iostream>
using namespace std;
int main(){
int thirdAngle;  // to find
int angle1 ;     //given angle
int angle2;
cout<< " what are the given two angles of a triangle ? "<< endl;
cin >> angle1 >> angle2;     // input of the angles given
float angle3= 180.0 - angle1 -angle2; // conversion
cout<<" The given triangle with "<<angle1<<" and " << angle2<<"as its two angles has "<< angle3<< " as its remaining angle."<<endl;   //result

}
