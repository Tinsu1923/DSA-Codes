#include<iostream>
using namespace std;
void swap(int &a, int &b){ // Swap function must be done using either reference or pointer as parameter.
    int temp = a;
    a=b;
    b=temp;
}
int bubble_sort(int a[], int size){
    for(int i=0; i<size-1; i++){ // Why size-1? Turns out it doesn't affect the code.
    // And, since we are using 0-based indexing, we need to make sure the next number [i+1] is a valid index.
        for (int j=0; j<size-1; j++){ // Compare the element at that index to the one directly next to it.
            if (a[j] > a[j+1]){
                swap(a[j], a[j+1]);
            }
    } 
    }
    return *a;
}
int main(){
    int arr[] = {1,2,3,2,19,6,4,5,7,11,19,13,7};
    bubble_sort(arr,13);
    for(int i = 0; i < 13;i++){
        cout<<arr[i]<<" ";
    }
}