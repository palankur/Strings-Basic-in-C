#include<stdio.h>                   //length of a string without using strlen
int main()
{
int i;
char str[20];
printf("Enter a string : ");
fgets(str,20,stdin);
for(i=0;str[i];i++);
printf("String length is %d",i-1);
return 0;
}
