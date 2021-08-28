#include<iostream>
using namespace std;
int main()
{
    int i,n,k,j=0,flag=0;
    cout<<"input size:";
        cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<"enter key: ";
        cin>>k;
    for(i=0;i<n;i++)
    {   j++;
        if(k==a[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        {cout<<k<<" found at: "<<i+1<<endl;
        cout<<"comparisons: "<<j;
        }
    else
        cout<<"not found";
}
