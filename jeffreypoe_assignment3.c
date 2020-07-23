#include <stdio.h>
#include <time.h>
// Jeffrey Poe 
// COP 2220
// July 23rd, 2020
// Z23530070

//Function One
void millionCount(){

  //Using time.h instead of an actual stopwatch because it seems silly to send a stopwatch timer with my submission, but my time to run was about 2.7 seconds.
  __clock_t begin = clock();

  // While loop that counts from 1 to 400,000,000
  int m = 1;
  while(m <= 400000000){
  if(m % 100000000 == 0){
    printf("%i \n", m );
  };
  m++;
  };

__clock_t end = clock();
double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
printf("It took %f seconds for this program to run\n\n", time_spent);
};

//Function Two
//a)
void funcTwo(){
  int n;
  printf("Please input a number to be tested.\n");
  scanf("%i", &n);
  int sum = 1+2+3+4+(n-1)+n;
  int product = (n*(n+1))/2;
  //b
  if(sum == product){
    printf("Sum: %i is equal to Product: %i", sum,product);
  }else{
    printf("Sum: %i is NOT equal to Product: %i", sum,product);
  };
  //c
  //Initially the sum of the user chosen number is the largest of the two. The product for my equation will come out to equal if the user chosen number is 6 and beyond that the variable Product will be the larger of the two, with the ability to be multiplied as many times as the number chosen. What can be determined for all choices for n is that beyond 6 it will equal to more than 
};

//Function Three
void table(){
  //Initialize varibles
  int min, max, sqr, cube;
  //Make variable for positioning in the array (One Dimnesional)
  int pos = 0;
  printf("Please Input the Minimum Value for the table.\n");
  scanf("%i", &min);
  printf("Please Input the Maximum Value for the table.\n");
  scanf("%i", &max);
  int arr[1000];

  //For loop to create a table with the desired values
  for(;min <= max; min++){
    sqr = min*min;
    cube = min*min*min;
    arr[pos] = min;
    pos++;
    arr[pos] = sqr;
    pos++;
    arr[pos] = cube;
    pos++;
    //Prints out proper values for each line per number between min and max
    printf("VALUE: %i  SQUARE ROOT: %i  CUBED: %i\n", min, sqr, cube);
    printf("=======================================\n");
  };
};

//Function 4
void pyramid(){
  //Nested For Loop to create stairway down
for(int i = 0; i <= 5; i++){
  for(int j = 0; j <= i; j++){
      printf("%i ", j);
  };
  printf("\n");
};
//Nested For Loop to create stairway up
for(int i = 4; i >= 0; i--){
  for(int j = 0; j <= i; j++){
      printf("%i ", j);
  };
  printf("\n");
};

printf("\n");
};

//Main, where all my functions are called.
int main(void) {
  millionCount();
  table();
  pyramid();
  funcTwo();
  return 0;
}