#include<stdio.h>               //upper case to lower case without suing strlwr()
int main()
{
    int i;
    char str[20];
    printf("Enter any string in upper case : ");
    fgets(str,20,stdin);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
        str[i]=str[i]+32;
        }
    }
    printf("The lower case is : %s",str);
    return 0;

}
