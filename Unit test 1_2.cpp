#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <windows.h>

main ()
{
 int taxamt, over, incometax;
 char ans;
 
 fstart:
 system ("CLS");
 printf ("The amount entered must be between 20000 to 44000");
 printf ("\n Enter the taxable amount:");
 scanf ("%d",&taxamt);
 
 if (taxamt>20000 && taxamt <=22000){
 	over=taxamt-20000;
 	incometax= taxamt-(5230+(over*.38));
 }
 else if (taxamt>22000 && taxamt <=26000){
 	over=taxamt-22000;
 	incometax= taxamt-(5990+(over*.38));	 	
 }
 else if (taxamt>26000 && taxamt <=32000){
 	over=taxamt-26000;
 	incometax= taxamt-(7590+(over*.38));	 	
 }
 else if (taxamt>32000 && taxamt <=38000){
 	over=taxamt-32000;
 	incometax= taxamt-(10290+(over*.38));	 	
 }	
 else if (taxamt>38000 && taxamt <=44000){
 	over=taxamt-38000;
 	incometax= taxamt-(13290+(over*.38));	 	
 }
else {
	goto fstart;
}	
	
printf ("\n The taxable amount is: %d", taxamt);
printf ("\n The income tax is: %d", incometax);

	
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