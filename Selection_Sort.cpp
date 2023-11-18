#include<iostream>
using namespace std;
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int Selection_Sort(int *a, int n){
for (int i=0; i<n-1;i++){
    int index_of_min = i;
    for (int j=i+1;j < n;j++){
    if (a[j] < a[index_of_min]){
        index_of_min = j;
    }
    }
    if (index_of_min != i){
        swap(&a[index_of_min],&a[i]);
    }
}
return *a;
}
int main(){
 int arr[] = {29,10,14,37,13};
 Selection_Sort(arr,5);
 for (int i=0; i<5;i++){
    cout<<arr[i]<<" ";
 }   
}