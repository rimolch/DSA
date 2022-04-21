#include<bits/stdc++.h>

using namespace std;

void merge(int ar[],int l,int mid,int h)
{
    int n1=mid-l+1;
    int n2=h-mid;
    int L[n1],H[n2];
    for(int i=0;i<n1;i++)
    {
        L[i]=ar[l+i];
    }
    for(int j=0;j<n2;j++)
    {
      H[j]=ar[mid+1+j];
    }
    int i=0,j=0,k=l;
    while(i<n1&&j<n2)
    {
        if(L[i]<=H[j])
        {
            ar[k]=L[i];
            i++;
        }
        else
        {
            ar[k]=H[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        ar[k]=L[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        ar[k]=H[j];
        j++;
        k++;
    }
}
void mergeSort(int ar[],int l,int h)
{
    if(l>=h)
    {
        return;//returns recursively
    }
    int mid =(h+l-1)/2;
    mergeSort(ar,l,mid);
    mergeSort(ar,mid+1,h);
    merge(ar,l,mid,h);
}
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    mergeSort(ar,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
    return 0;
}
