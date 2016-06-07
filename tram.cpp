#include <iostream>

using namespace std;

int main()
{
    int n,cap=0,temp=0;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    for(int i=1;i<n;i++)
    {
        temp+=b[i-1]-a[i-1];
        if(temp>=cap)
            cap=temp;
    }
    cout <<cap;
    return 0;
}
