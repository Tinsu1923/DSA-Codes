#include<iostream>
using namespace std;
int Bubble_Sort(int a[], int b){ // Bubble sort basically pushes the largest(or smallest, depends on what we wanna do.) element in the array to the right(last index), and repeats this process until everything is sorted.
    for (int j=0; j<b-1; j++){ // We go from the first index to the last index.
        bool flag = false; // This is a flag to tell us whether a swapping is done at an iteration or not.
        for(int i=0; i<b-1; i++){
            if (a[i] > a[i+1]){
                swap(a[i], a[i+1]); // We are pushing the largest element to the last index.
                flag = true; // Whenever a swapping is done, this means the sorting is not fully done.
            }
        }
        b--; // Since we have put the last element in its place, we can decrease the length to be more efficient. (It would be repetition of unnecessary code.)
            // For some reason though, the sorting algorithm may not work if we do this. 
        if (flag == false) // This means that no swapping was done. And if no swapping was done, everything is in its place.
        return *a;
    } 
        return *a;     
       }

void swap(int &a, int &b){ // The swapping function.
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int arr[]= {12,54,34,67,21,100,45,83};
    int a[] = {2,11,6,17,19,23,43,33,19,100,12,509};
    Bubble_Sort(arr,8);
    cout<<"The sorted array is: ";
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
} 
Bubble_Sort(a,12);
cout<<"The sorted array is: ";
for(int i=0;i<11;i++){
    cout<<a[i]<<" ";
}
}

