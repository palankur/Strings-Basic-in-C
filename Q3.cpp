#include<stdio.h>           //vowels in a given string
int main()
{
    int i,count=0;
    char str[20];
    printf("Enter any string in lower case : ");
    fgets(str,20,stdin);
    for(i=0;str[i];i++){
            if(str[i]=='a'|| str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            count++;
            }
    }
    printf("Number of vowels are : %d",count);
    return 0;
}
