#include <stdio.h>
#include <time.h>

//Function One
void millionCount(){

  __clock_t begin = clock();

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
void funcTwo(){
  please
};

//Function Three
void table(){
  int min, max, sqr, cube;
  int pos = 0;
  printf("Please Input the Minimum Value for the table.\n");
  scanf("%i", &min);
  printf("Please Input the Maximum Value for the table.\n");
  scanf("%i", &max);
  int arr[1000];

  for(;min <= max; min++){
    sqr = min*min;
    cube = min*min*min;
    arr[pos] = min;
    pos++;
    arr[pos] = sqr;
    pos++;
    arr[pos] = cube;
    pos++;
    printf("VALUE: %i  SQUARE ROOT: %i  CUBED: %i\n", min, sqr, cube);
    printf("=======================================\n");
  };
};

//Function 4
void pyramid(){
for(int i = 0; i <= 5; i++){
  for(int j = 0; j <= i; j++){
      printf("%i ", j);
  };
  printf("\n");
};
for(int i = 4; i >= 0; i--){
  for(int j = 0; j <= i; j++){
      printf("%i ", j);
  };
  printf("\n");
};

printf("\n");
};


int main(void) {
  // millionCount();
  // table();
  // pyramid();
  return 0;
}