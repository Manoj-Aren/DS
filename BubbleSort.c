#include <stdio.h>

int main(void) {
  int array[] = {11,3,4,5,88,22,324,18,2,12,3,0};
  int i = 0;
  int swap = 0;
  int arraySize = sizeof(array) / sizeof(int);
  int temp = array[0];

  printf("Hello World\n");

  for (i=0; i <arraySize; i++) {
    printf("%d ", array[i]);
  }

  printf("\n");


  for (int j= 0; j < arraySize-1; j++) {
    swap = 0;
    for (i = 0; i < (arraySize -j -1) ; i++) {
      if (array[i] > array[i+1]) {
          temp = array[i+1];
          array[i+1] = array[i];
          array[i] = temp;
          swap = 1;
      }
    }
    if (swap == 0) break;
  }

  for (i=0; i <arraySize; i++) {
    printf("%d ", array[i]);
  }

  printf("\n");
  

  return 0;
}