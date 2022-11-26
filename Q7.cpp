#include<stdio.h>           //counting number of ALPHABETS,NUMBERS & SPECIAL CHARACTER in a given string
int main()
{
    int i,alpha=0,digits=0,spcl=0;
    char str[100];
    printf("Enter any string value : ");
    fgets(str,100,stdin);
    for(i=0;str[i];i++)
    {
        if((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122))
            alpha++;
        else if(str[i]>=48 && str[i]<=57)
        digits++;
        else
            spcl++;

    }
     printf("Number of alphabets in the given string is : %d",alpha);
      printf("\nNumber of digits in the given string is : %d",digits);
       printf("\nNumber of special characters in the given string is : %d",spcl-1);
       return 0;
}
