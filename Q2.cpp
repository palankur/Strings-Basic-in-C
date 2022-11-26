#include<stdio.h>               //occurrence of a given chracter
int main()
{
    int i,count=0;
    char str[20],m;
    printf("Enter any string in lower case : ");
    fgets(str,20,stdin);
    printf("Enter the character to find : ");
    scanf("%c",&m);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==m)
            count++;
    }
    printf("The occurrence of the given character is : %d",count);
    return 0;

}
