#include<stdio.h>           //frequency of an alphabet n a string
#include<string.h>
int main()
{
    int i,k;
    int freq[150]={0};
    char a[10];
    printf("Enter the string (alphabets only) : ");
    fgets(a,10,stdin);
    k=strlen(a);
    for(i=0;i<k;i++)
    {
            freq[a[i]]++;
    }
    printf("The frequency of numbers entered by the users are : ");
    for(i=0;i<150;i++){
    if(a[i]!='\0' && a[i]!=' '){
        printf("\n%c is %d times",a[i],freq[a[i]]);
    }
    }
    return 0;
}
