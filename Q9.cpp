#include<stdio.h>                   //sorting of a string array in ascending order
#include<string.h>
int main()
{
    int i,j,l;
    char str[40],ch;
    printf("Enter the string : ");
    fgets(str,40,stdin);
    l=strlen(str);
    for(i=1;i<l;i++){
        for(j=0;j<l-i;j++)
        {
        if(str[j]>str[j+1])
        {
        ch=str[j];
        str[j]=str[j+1];
        str[j+1]=ch;
        }
        }
    }
    printf("%s",str);
    return 0;
}

