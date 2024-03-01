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
/*
Given a square matrix, calculate the absolute difference between the sums of its diagonals.

For example, the square matrix  is shown below:
Sample Input

3
11 2 4
4 5 6
10 8 -12
Sample Output

15
Explanation

The primary diagonal is:

11
   5
     -12
Sum across the primary diagonal: 11 + 5 - 12 = 4

The secondary diagonal is:

     4
   5
10
Sum across the secondary diagonal: 4 + 5 + 10 = 19
Difference: |4 - 19| = 15
*/


int diagonalDifference(int arr_rows, int arr_columns, int** arr) {
    int sum1=0, sum2=0, difference=0, temp=0;
    temp=arr_rows-1;
    for (int i = 0; i < arr_rows; i++) {
            for (int j = 0; j < arr_rows; j++) {
                if (i==j) {
                    sum1+=arr[i][j];
                }
                if (j==temp) {
                     sum2+=arr[i][j];
                     temp--;
                }  
            }
        }
    difference=abs(sum1-sum2);
      return difference;  
}
/*
Function Description

Complete the timeConversion function in the editor below. It should return a new string representing the input time in 24 hour format.

timeConversion has the following parameter(s):

string s: a time in  hour format
Returns

string: the time in  hour format
Input Format

A single string  that represents a time in -hour clock format (i.e.:  or ).

Constraints

All input times are valid
Sample Input 0

07:05:45PM
Sample Output 0

19:05:45
*/
char* timeConversion(char* s) {
    int hour, minute, second;
    char am_pm[3];

    // Parse the input time string
    sscanf(s, "%d:%d:%d%s", &hour, &minute, &second, am_pm);

    // Adjust hour if necessary
    if (strcmp(am_pm, "PM") == 0 && hour != 12) {
        hour += 12;
    } else if (strcmp(am_pm, "AM") == 0 && hour == 12) {
        hour = 0;
    }

    // Allocate memory for the result string
    char* result = (char*)malloc(9 * sizeof(char)); // HH:MM:SS + null terminator

    // Format the time in 24-hour format
    sprintf(result, "%02d:%02d:%02d", hour, minute, second);

    return result;
}
