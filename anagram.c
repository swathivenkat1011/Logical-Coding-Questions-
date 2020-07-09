#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k;
    char str1[10],str2[10],str3[2]="\0";
    printf("Enter the string 1-->");
    scanf("%s",str1);
    printf("Enter string 2--->");
    scanf("%s",str2);
    if(strlen(str1)!=strlen(str2))
    {
        printf("Not a Anagram\n");
    }
   else{
    for(i=0;i<strlen(str1);i++)
    {
        str3[0]=str1[i];
        j=strcspn(str2,str3);
        if(j!=strlen(str2))
        {
            for(k=j;k<strlen(str2);k++)
            {
                str2[k]=str2[k+1];
            }
        }
        else
        {
            printf("Not a Anagram\n");
            break;
        }
    }
    }
    if(strlen(str2)==0)
    {
        printf("Anagram");
    }
    return 0;
}
