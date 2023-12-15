// Selection sort is another comparison based sorting algorithm.
// It works by assigning the first index [i] to a variable, let's call it minIndex, and comparing that index with the rest of the elements.
// If there is a number in another index that is smaller than the value in minIndex, our new minIndex will be this index that holds the minimum value. 
// If minIndex is changed from the previous value it had, we will proceed to swap it with the previous index.
// We increment i by 1, and repeat all the steps until everything is sorted.
#include<iostream>
using namespace std;
void swap(int &a, int &b){
    int temp = a;
    a=b;
    b=temp;
}
int selection_sort(int arr[], int size){
    for(int i = 0; i < size;i++){
        int minIndex = i; // set the index to be the first element in the array
        bool flag = false; // a flag to check if index is changed or not.
        for(int j = i+1; j < size+1;j++){
            if (arr [j] < arr [minIndex])
            {
                minIndex=j;
                flag = true;
            }
        }
        if (flag){
            swap(arr[i], arr[minIndex]);
        }
    }
    return *arr;
}
int main(){
    int a[]={1,5,2,8,9,6,19,4,7,12,10,11,3};
    selection_sort(a,14);
    for (int i = 0; i < 14; i++){
        cout<< a[i] <<" ";
    }
}