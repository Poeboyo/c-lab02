#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Jeffrey Poe 
//June 24th 2020
//COP 2220 
//Lab 03 


//ORIGINAL CODE 
// a) if age >= 65 ;
// printf( "Age is greater than or equal to 65\n" );
// else
// printf( "Age is less than 65\n" );
// b) if (deduct < balance);
// balance = balance - deduct;
// printf("New balance is %.2f\n", balance);
// else;
// printf("Deduction of %.2f refused.\n", deduct);
// printf("Would overdraw account.\n");
// printf("Deduction = %.2f Final balance = %.2f",deduct, balance);
//=====================================================================



//REWORKED
//a) if(age >= 65){
// printf("Age is greater than or equal to 65\n")}
// else{  printf( "Age is less than 65\n" )};

// b) if (deduct < balance){
// balance = balance - deduct
// printf("New balance is %.2f\n", balance);}
// else{
// printf("Deduction of %.2f refused.\n", deduct);
// printf("Would overdraw account.\n");
// printf("Deduction = %.2f Final balance = %.2f",deduct, balance);};



//======================================================================




void absol(num1, num2){
    printf("Please enter a Number \n");
    scanf("%d", &num1);
    printf("Please enter another number \n");
    scanf("%d", &num2);

    int absoluteVal = (((num1 - num2)*-1)*1);
    printf("Your absolute value after subtraction is %i!", absoluteVal);
};
 
int main(){
  absol();
};
