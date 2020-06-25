#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Jeffrey Poe 
//June 24th 2020
//COP 2220 
//Lab 03 
void absol(num1, num2){
    printf("Please enter a Number");
    scanf("%d", &num1);
    printf("Please enter another number");
    scanf("%d", &num2);

    int absoluteVal = (((num1 - num2)*-1)*1);
    printf("Your absolute value after subtraction is %i !", absoluteVal);
};
 
int main(){
};


