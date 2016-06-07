#include <iostream>
#include<stdio.h>
using namespace std;
int main()
{
int n,c=0;
cin>>n;
char a[n];
scanf("%s",&a);
for(int i=0;i<n;i++)
{
if(a[i]==a[i+1])
    c++;
}
cout<<c;
return 0;
}
