#include <stdio.h>
#include <ctype.h>
#include <windows.h>
#include <conio.h>

main()
{	
	int age,zctr=0,pctr = 0,nctr = 0;
	char ans;char* mes;int numP = 0,numN = 0,numZ = 0;
	int numTot = 0;
doon:	
	//i
	system("CLS");
	printf("Enter an age ");
	scanf("%d",&age;
	
	//process
	numTot = numTot + age;
	if  (num < 13)
		pctr = pctr + 1;
		numP = num;
		//numTot = numTot + numP;
		mes = "The age %d is less than 13 \n"; 
		 if (num < -0)
	  		
	  		nctr = nctr + 1;
			numN = num;
		//	numTot = numTot + numN;
	  		    zctr = zctr + 1;
	  		  	numZ = num;
	  		  //numTot = numTot + numZ;
	  		  
	  		  
	  		printf(mes ,numP,nctr );
		    printf("The total number of positive is %d \n",pctr);	  
	  		printf("The number %d is negative \n",numN);
			printf("The total number of negative is %d\n",nctr);	   		
			printf("The number %d is zero \n",zctr);
			printf("The total number of zero is %d \n",zctr);  
			printf("The total of all the number inputted via keyboard is %d\n",numTot);	
ulit:
	printf("Do you want to continue?Y/N \n");
	ans = tolower(getch());
	
	if (ans == 'y'){
		goto doon;
	}else if (ans == 'n'){
		exit(0);
	}else 
	{
		goto ulit;
	}
			
}