#include<stdio.h>           //copying string without using strcpy()
int main()
{
    int i;
    char str1[20],str2[20];
    printf("Enter first string : ");
    fgets(str1,20,stdin);
    //printf("Enter second string : ");
    //fgets(str2,20,stdin);
    for(i=0;str1[i];i++)
    {
    str2[i]=str1[i];
    }
    //str1[i]='\0';
    printf("%s",str2);
    return 0;
}
