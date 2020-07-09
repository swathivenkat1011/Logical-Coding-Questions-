#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,val,l,k,t,rem,res,p;
    printf("Enter the number\n");
    scanf("%d",&n);
    if(n==1)
        printf("0");
    else
    {
        val=pow(2,n);
        for(i=0;i<n;i++)
        {
            printf("0");
        }
        printf("\n");
        for(i=1;i<val;i++)
        {
            t=i;
            k=1;
            res=0;
            while(t>0)
            {
                rem=t%2;
                res=res+rem*k;
                k=k*10;
                t=t/2;
            }
            p=log2(i)+1;
            for(l=0;l<(n-p);l++)
            {
                printf("0");
            }
            printf("%d\n",res);
        }
    }
    return 0;
}
