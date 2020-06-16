#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Jeffrey Poe 
//June 15th 2020
//COP 2220 
//Lab 02 
float avg(int num1,int num2,int num3);

 
int main(){
float response = avg(2,2,3);

};

float avg(int num1,int num2,int num3){
   //Initializes variables
  printf("Please enter 3 Numbers \n");
  scanf("%d", &num1);
  scanf("%d", &num2);
  scanf("%d", &num3);
  int sum = num1+num2+num3;
  float average = sum/3.0;
 
 return printf("Average of Selected Numbers %f", average); 

};

