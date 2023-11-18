#include<iostream>
using namespace std;
void printArray(int arr[], int n){
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
void swap(int *a, int *b){
    int temp = *a;
    *a =*b;
    *b = temp;
}
void selectionSort(int array[], int n) {
  for (int i = 0; i < n - 1; i++) {
    int index_of_min = i;
    for (int j = i + 1; j < n; j++) {

      // To sort in descending order, change > to < in this line.
      // Select the minimum element in each loop.
      if (array[j] < array[index_of_min])
        index_of_min = j;
    }
    // put min at the correct position
    swap(&array[index_of_min], &array[i]);
}
}
int main(){
    int arr[]= {12,45,23,76,31};
    selectionSort(arr,5);
    printArray(arr,5);
}