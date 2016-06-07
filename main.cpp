#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
int a[100000];
int cases;
long n;
do
{
int i=0,j=0;
    scanf("%ld",&n);
    if(n==0) return 0;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    int flg=0;
    for(i=0;i<n;i++)

        {
            if(a[a[i]-1]==i+1)
            flg++;
        }
        if(flg==n)
        cout<<"ambiguous"<<endl;
        else
        cout<<"not ambiguous"<<endl;
}
    while(n!=0);


return 0;
}



/*
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,a[100001],i;
    while(1)
    {
        scanf("%d",&n);
        if(n==0)break;
        for(i=1;i<=n;i++)
             scanf("%d",&a[i]);
        for(i=1;i<=n;i++)
        {
            if(a[a[i]]!=i){printf("not ambiguous \n");break;}
            if(i==n)printf("ambiguous \n");
        }
    }
    return 0;
}
*/
