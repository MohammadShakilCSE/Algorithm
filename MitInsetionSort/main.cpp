#include <iostream>

using namespace std;

void insetionSort(int arr[],int n){
int i,j,key;
for(i=1;i<n;i++){//i=1,i=2
    key=arr[i];//53,12
    j=i-1;//j=0,j=1
    /*arr[0]=45!> 53,arr[1]>12,arr[0],45>12*/
    while(arr[j]>key && j>= 0){
        arr[j+1]=arr[j];//,
        /*
        arr[2]=arr[1]
        45,12 53;
        arr[1]=arr[0],
        12,45,53;
        */
        j=j-1;//j=1,
    }
    arr[j+1]=key;//arr[1]=53
}
}
void print(int arr[],int n){
for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
}
}
int main()
{
   int arr[]={45,53,12,4,5,90};
   int n=sizeof(arr)/sizeof(arr[0]);
   insetionSort(arr,n);
   print(arr,n);
    return 0;
}
