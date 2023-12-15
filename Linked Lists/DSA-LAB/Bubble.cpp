#include<iostream>
using namespace std;
void swap(int &a,int &b){
    int temp = a;
    a=b;
    b=temp;
}
int bubble(int arr[], int size){
    for(int i=0; i<size;i++){
        bool flag = false;
        for(int j=0; j<size;j++){
            if (arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = true;
            }
    }
    if (flag==false) return *arr;
}
return *arr;
}
int main(){
    int a[11] = {19,2,17,43,23,100,11,509,4,54,33};
    bubble(a,11);
    for(int i = 0; i < 11;i++){
        cout<<a[i]<<" ";
    }
    }
