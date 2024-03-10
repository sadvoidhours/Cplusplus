#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <windows.h>

main ()
{
int whtax, gross, taxrate, net, hours, overtime;
char lposition, ans;
char* str;
int sstax=200, pagibig=100;

fstart:
	system("CLS");
	printf ("\n Enter the Position \n M-Messenger \n E-Encoder \n T-Technician \n P-Programmer \n S-System Analyst");
	lposition=tolower (getch());
	printf ("\n Enter the number of working hours:");
	scanf ("%d", &hours);
	
	if (hours<=160 && hours >0){
	     if (lposition=='m'){
	     	str= "Messenger";
	     	gross=5500;
	     	taxrate=.05;
	     	whtax=gross*.05;
		 }	
		if (lposition=='e'){
	     	str= "Encoder";
	     	gross=6500;
	     	taxrate=.06;
	     	whtax=gross*.06;
		 }
		 	if (lposition=='t'){
	     	str= "technician";
	     	gross=7500;
	     	taxrate=.07;
	     	whtax=gross*.07;
		 }	
		 if (lposition=='P'){
	     	str= "Programmer";
	     	gross=10000;
	     	taxrate=.08;
	     	whtax=gross*.08;
		 }	
		 if (lposition=='s'){
	     	str= "System Analyst";
	     	gross=12500;
	     	taxrate=.09;
	     	whtax=gross*.09;
		 }
	
	}
	else if (hours>160){
		if (lposition=='m'){
	     	str= "Messenger";
	     	gross=5500*1.5;
	     	taxrate=.05;
	     	overtime=5500*.05;
	     	whtax=gross*.05;
		 }	
		 if (lposition=='e'){
	     	str= "Encoder";
	     	gross=6500*1.5;
	     	taxrate=.06;
	     	overtime=6500*0.05;
	     	whtax=gross*.06;
		 }
		 if (lposition=='t'){
	     	str= "technician";
	     	gross=7500*1.5;
	     	taxrate=.07;
	     	overtime=7500*0.05;
	     	whtax=gross*.07;
		 }	
		 if (lposition=='P'){
	     	str= "Programmer";
	     	gross=10000*1.5;
	     	taxrate=.08;
	     	overtime=10000*0.05;
	     	whtax=gross*.08;
		 }	
		  if (lposition=='s'){
	     	str= "System Analyst";
	     	gross=12500*1.5;
	     	taxrate=.09;
	     	overtime=12500*0.05;
	     	whtax=gross*.09;
	     }

	}
	
	net= gross-(sstax+pagibig+whtax);
	
	printf ("\n Employeee's name is Mark Al Rayn D. Bartolome");
	printf ("\n Company: TUP Taguig Campus");
	printf ("\n Your position is: %s",str);
	printf ("\n The hours you worked this month is: %d",hours);
    printf ("\n Your overtime pay is: %d",overtime);	
	printf ("\n The SSS tax is: %d",sstax);
	printf ("\n The pag-ibig tax is: %d",pagibig);
	printf ("\n The SSS tax is: %d",whtax);
	printf ("\n The net salary is: %d",net);
	
	sstart:
	printf ("\n Do you want to continue? Y|N");
	ans=tolower (getch());
	if (ans=='y'){
		goto fstart;
	}
	else if (ans=='n'){
		exit (0);
	}
	else {
		goto sstart;
	}	
		
}
