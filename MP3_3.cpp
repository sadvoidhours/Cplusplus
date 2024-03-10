#include <stdio.h>
#include <iostream>
#include <math.h>
#include <iomanip>


using namespace std;
main(){
	
double cent=0.01;
int day=1;	
	
	cout<<"DAY"<<setw(25)<<"Amount owned"<<endl;
	cout<<"--------------------------------"<<endl;
	
	for (day=1 ; day<=64; day++){
	cout<<day<<setw(25)	<<cent<<endl;
	cent=cent*2;
	
	}
	
	return (0);	
	
}