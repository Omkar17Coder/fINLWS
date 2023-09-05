#include <iostream>
#include <algorithm>
using namespace std;
int flag=0;
/*int check_sort(int arr[], int n)
{
    
    int maxi=arr[0];
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]<arr[i+1])
        {
            flag++;
        }
        if(maxi<arr[i])
        { 
            maxi=arr[i];
        }
    }
    return maxi;
}
void func(int arr[],int n)
{
    long long int count=0;
    int x = check_sort(arr,n);
    if(flag!=0) cout<<x;
    else cout<<0;
   /* {     
            count++;
            for(int i=0;i<n;i++)
            {
               arr[i]=max(0,arr[i]-1);
            } 
    }
    cout<<count;
    return;
}*/
int func1(int a[],int b[],int n)
{
    sort(b,b+n);
    
    for(int i=n-1;i>=0;i--)
    {
        if(b[i]!=a[i])
        {
            return b[i];
        }
    }
    return 0;

}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t>0)
    {
        int n; cin>>n;
        int arr[n];int x;int b[n];
        for(int i=0;i<n;i++)
        {
            cin>>x;
            arr[i]=x;
            b[i]=x;
        }
        int y = func1(arr,b,n);
        cout<<y<<endl;
        t--;
    }
}