#include<iostream>
#include<cstdlib>
using namespace std;
main()
{
   int *a,n,*h,flag=0,val,key;
   h=(int*)calloc(10,sizeof(int));
   cout<<"Enter the size of array\t";
   cin>>n;
   a=(int*)malloc(sizeof(int)*n);
   for(int i=0;i<n;i++)
   {
   cin>>a[i];
   h[a[i]]++;
   if(h[a[i]]>1)
   {
       if((flag==1)&&(a[i]!=key))
       {
           val=a[i];
           flag=5;
       }
       if(flag==0)
       {
           flag=1;
           key=a[i];
       }
   }
   }
   cout<<"The 2nd frequent no is "<<val;
   free(a);
   free(h);
   return 0;
}
