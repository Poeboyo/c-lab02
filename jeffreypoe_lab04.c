#include <stdio.h>


//Jeffrey Poe 
//July 11th 2020
//COP 2220 
//Lab 04
void Q1(){
int i = 2;
double n;
printf("Watch out! Here come a bunch of fractions!\n"); while (i < 30){
i+=1;
n = 1/i;
printf(" %f \n", n);
              };
              printf("That's all, folks!\n");


};

void Q2(){
  //Creates an array of ints 7 inputs long
  int n[7];
   int i;
   int j = 0;
 //For loop to multiply incoming numbers
   for ( i = 1; i < 65; i = i*2 ) {
     n[j] = j;
     //Prints value
     printf("Index of %i is equal to %i\n", n[j], i);
      //Increases index of array value
     j = j+1;
   }
   //Creates Space between functions
   printf("\n");
};


int Q3(){
//Initializes Variables
int count, sum, next_num;
//Gives Count and Sum default values of 0
count = 0;
sum = 0;
//While loop checks that number of inputs doesnt exceed 5
while (count < 5){
//Increases input counter per number
count += 1;
printf("Next number> ");
//Takes user input
scanf("%d", &next_num);
//Adds user input to sum
sum += next_num;
//Keeps track of number of ints added
printf("%d numbers were added; \n", count);};
//After while loop ends, gives back the sum of numbers
printf("their sum is %d.\n", sum);
};


int main(){
  Q1();
  Q2();
  Q3();
};
