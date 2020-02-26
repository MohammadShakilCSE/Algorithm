#include<bits/stdc++.h>

using namespace std;
void mergeV(int arr[], int l, int m, int r)
{
    int i=0, j=0, k=1;
    int n1 = m - l + 1;
    int n2 =  r - m;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mSort(int arr[],int l,int r){
    if(l<r){
        int mid=l+(r-l)/2;
        mSort(arr,l,mid);
        mSort(arr,mid+1,r);
        mergeV(arr,l,mid,r);
    }
}
void print(int arr[],int n){
for(int i=0;i<n;i++)
    cout<<arr[i]<<endl;
}

int main()
{
    int arr[]={90,34,223,4,5,23,121};
    int start=0;
    int n=sizeof(arr)/sizeof(arr[0]);
    print(arr,n);

    mSort(arr,start,n-1);//n==array size;
    print(arr,n);
    return 0;
}
