#include <stdio.h>
#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;
int main (){
	
int cel, numconv, incre, numctr;
float far;

	cout<<fixed<<showpoint<<setprecision(1);
	
	cout<<"Enter the starting Celsius Value:"<<endl;
	cin>>cel;
	
	cout<<"Enter the number of conversion:"<<endl;
	cin>>numconv;
	
	cout<<"Enter the incremented value after each conversion"<<endl;
	cin>>incre;
	
	cout<<setw(7)<<"Celsius"<<setw(14)<<"Farenheit"<<endl;
	cout<<"--------------------------------"<<endl;
	
	while (numctr<numconv){
		
	far=(9.0/5.0)*cel+32.0;
	cout<<setw(7)<<cel<<setw(14)<<far<<endl;
	
	cel=cel+incre;
	numctr=numctr+1;
		
		
	}
	


	return (0);	
}