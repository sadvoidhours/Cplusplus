#include <iostream>
#include <math.h>
#include <iomanip>


using namespace std;

int main (){
	
int gal;
float liters;	
	
	cout<<fixed<<showpoint<<setprecision(3);
	cout<<setw(7)<<"Gallons"<<setw(14)<<"liters"<<endl;
	cout<<"--------------------------------"<<endl;
	
	for (gal=10; gal<=20; gal++){
		
	liters= 3.785*gal;	
		
	cout<<setw(7)<<gal<<setw(14)<<liters<<endl;	
	}
	
	return (0);	
}