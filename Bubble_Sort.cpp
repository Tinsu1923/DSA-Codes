#include<iostream>

using namespace std;
int Bubble_Sort(int *a, int b){
    for(int j=0; j<b-1; j++){
        bool flag = false;
        for (int i=0; i<b-1; i++){
            if (a[i] > a[i+1]){
                swap(a[i], a[i+1]);
                flag = true;
            }
        }
        b--;
        if (flag == false)
        return *a;
    } 
        return *a;     
       }

void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int arr[]= {12,54,34,67,21,100,45,83};
    Bubble_Sort(arr,8);
    cout<<"The sorted array is: ";
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
}
int ar[] = {3,6,11,36,25};
Bubble_Sort(ar,5);
cout<<"The sorted array is: ";
for(int i=0;i<5;i++){
    cout<<ar[i]<<" ";
}
}

