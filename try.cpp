#include <stdio.h>
#include <iostream>
#include <Math.h>
#include <iomanip>

using namespace std;

int main(){
	int gallons,liters;
	
	cout<<setw(5)<<"gallons"<<setw(10)
	    <<"Liters"<<setw(20)<<endl;
	
	for (gallons = 10; gallons<= 20;gallons++){
		
	liters = pow(gallons,2);	 
	
	cout<<setw(5)<<gallons<<setw(10)
	    <<liters<<setw(10)<<endl;
		
	}
	
}