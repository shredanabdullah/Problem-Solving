/*
You are in charge of the cake for a child's birthday. 
You have decided the cake will have one candle for each year of their total age. 
They will only be able to blow out the tallest of the candles. Count how many candles are tallest.
Sample Input 0

4
3 2 1 3
Sample Output 0

2
*/
int birthdayCakeCandles(int candles_count, int* candles) {
    int sum=0, max=0, count =0 ;
    for (int i=0; i<candles_count; i++) {
        if (candles[i]>max) {
            max=candles[i];
        }
    }
    for (int i=0; i<candles_count; i++) {
        if (candles[i]==max) {
            count ++;
        }
    }
    return count;
}
/*
ackerLand University has the following grading policy:

Every student receives a grade in the inclusive range from 0 to 100 .
Any grade less than 40 is a failing grade.
Sam is a professor at the university and likes to round each student's grade  according to these rules:

If the difference between the grade and the next multiple of 5 is less than 3, round grade up to the next multiple of 5 .
If the value of grade is less than 38 , no rounding occurs as the result will still be a failing grade.
Examples
*/
int* gradingStudents(int grades_count, int* grades, int* result_count) {
    int temp=0;
    for (int i=0; i<grades_count; i++) {
        int remainder = grades[i] % 5;
        if (grades[i]>=38  && remainder!=0 && (5 - remainder)<=2) {
             grades[i]+= (5 - remainder);
        }
    }
     *result_count = grades_count;
 
      int *arr = malloc(grades_count * sizeof(int));
 
      for (int i = 0; i < grades_count; i++) {
          *(arr + i) = grades[i];
      }
 
      return arr;
}
/*
Staircase detail

This is a staircase of size : n=4

   #
  ##
 ###
####
*/

void staircase(int n) {
      for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        for (int k = 0; k <= i; k++) {
            printf("#");
        }
        printf("\n");
    }
}
