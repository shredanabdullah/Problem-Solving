/*
given an array of integers, what is the lenghth of the longest subarray containing no more than two distict values such that the distinct values differ by no more than 1
int longestSubarray(int arr_count, int* arr) {

}
constrains 
the longest subaray will have fewer than 35 element
1<=n<=10^5
1<=arr[i]<=10^9

ex 
arr[1,1,1,3,3,2,2]
the largest such subarray has lenth 4:[3,3,2,2], the values 1 and 3 differ by more than one so[1,1,1,3,3] is not valid
ex:
arr[0,1,2,1,2,3]
the largest subarray has length 4[1,2,1,2]
*/
#include <stdio.h>
#include <stdlib.h>



int longestSubarray(int arr_count, int* arr) {
    if (arr_count == 1) {
        return 1; // If there's only one element, the longest subarray has length 1
    }

    int max_length = 0;
    int temp = 1;
    for (int i = 1; i <= arr_count-1; i++) {
        if ( arr[i]-arr[i-1]==1 ||arr[i]-arr[i-1]==0||arr[i]-arr[i-1]==-1) temp++;
         else {
             if(max_length<=temp) max_length=temp;
             temp=1;
         }
    }
    // Check if the last subarray is longer than max_length
   if(max_length<=temp) max_length=temp;

    return max_length;
}

int main() {
    int arr[] = {
        157793605,
        157793605,
        157793604,
        157793604,
        157793604,
        157793604,
        157793605,
        157793605,
        157793605,
        157793604,
        157793605,
        157793604,
        157793605,
        157793605,
        157793604,
        157793604,
        157793604,
        157793605,
        157793605,
        157793605,
        157793605,
        157793604,
        157793604,
        157793605,
        157793604,
        157793605,
        157793605,
        157793605,
        157793604,
        157793605,
        157793605
    };
    int arr_count = sizeof(arr) / sizeof(arr[0]);
    int result = longestSubarray(arr_count, arr);
    printf("Length of the longest subarray: %d\n", result);
    return 0;
/*
my Output 
31
Expected Output

31
*/
}
