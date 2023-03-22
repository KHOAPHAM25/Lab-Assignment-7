#include <stdio.h>
// this is the bubbleSort
void bubbleSort(int arr[], int n) {
  //this is the standards
    int i, j, temp, swaps;
  //i is 0 and i is less than n minus 1, i plus 1 
    for (i = 0; i < n - 1; i++) {
      //swaps is initalized to 0
        swaps = 0;
      //j standards, j is 0, j is less than j minues i minues 1, j plus 1
        for (j = 0; j < n - i - 1; j++) {
          //initialize the array if j is greater than plus 1 
            if (arr[j] > arr[j + 1]) {
              //temp is the array j
                temp = arr[j];
              //arr J is arr j plus 1 
                arr[j] = arr[j + 1];
              // arr j plus 1 is temp 
                arr[j + 1] = temp;
              //swaps plus 1
                swaps++;
            }
        }
      //print out the passes
        printf("Pass #%d: %d\n", i+1, swaps);
    }
}
//int main
int main() {
  //int array shows the numbers given 
    int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
  //int n is size of array divided by size of array 0
    int n = sizeof(arr) / sizeof(arr[0]);
  // bubblesort
    bubbleSort(arr, n);
  //returns 0
    return 0;
}
