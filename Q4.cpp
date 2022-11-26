#include<stdio.h>               //any string to upper case
int main()
{
    int i;
    char str[20];
    printf("Enter any string: ");
    fgets(str,20,stdin);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
        str[i]=str[i]-32;
        }
    }
    printf("The upper case is : %s",str);
    return 0;

}
