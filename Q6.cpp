#include<stdio.h>           //reverse a string without using strrev()
#include<string.h>
int main()
{
    int i;
    char str[20];
    printf("Enter any string : ");
    fgets(str,20,stdin);
    strlen(str);
    for(i=(strlen(str)-1);str[i]>0;i--)
        printf("%c",str[i]);
    return 0;
}
