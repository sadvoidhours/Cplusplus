#include <stdio.h>
#include <windows.h>
#include <conio.h>

int main()
{

//Input
    int grade, sumA=0, sumB=0, sumC=0, sumD=0, sumF=0, sumP=0;
    char answer, grade_letter;

    retry:
    system("CLS");
    printf("Type The Calculated Grade: ");
    scanf("%d",&grade);
  
  //Process 
    if (grade > 0 && grade <=100)

    switch (grade){
    case 1 ... 59: grade_letter = 'F';
        break;
    case 60 ... 69: grade_letter = 'D';
        break;
    case 70 ... 79: grade_letter = 'C';
        break;
    case 80 ... 89: grade_letter = 'B';
        break;
    case 90 ... 100: grade_letter = 'A';
        break;
    }
    else
    {
        return (0);
    }


if (grade==90 && grade<=100)
{
	sumA=sumA+1;
    sumP=sumP+1;
	
}

if (grade ==80 && grade<=89)   
{
    sumB=sumB+1;
    sumP=sumP+1;	
}

if  (grade ==70 && grade<=79)    
{
    sumC=sumC+1;
    sumP=sumP+1;
}

if (grade ==60 && grade<=69)
{
    sumD=sumD+1;
    sumP=sumP+1;	
}

if (grade <60)   
{
sumF=sumF+1;	
}
     //Output
    printf("Grade entered: %d\n",grade); 
    printf("Equivalent grade letter: %c\n",grade_letter);
    printf("Number of students who passed: %d\n",sumP);
    printf("Number of students who failed: %d\n",sumF);
    printf("Number of students who got A: %d\n",sumA);
    printf("Number of students who got B: %d\n",sumB);
    printf("Number of students who got C: %d\n",sumC);
    printf("Number of students who got D: %d\n",sumD);
    printf("Number of students who got F: %d\n",sumF);
    
        goback:
        printf("Do you still want to continue? If Yes type Y if No Then Type N:");
        answer = getch(); 

        if ( answer == 'Y' || answer == 'y') {
            goto retry;
        }else if (answer == 'N' || answer == 'n'){
            exit(0);
        }else {

            exit (0);
        }
}