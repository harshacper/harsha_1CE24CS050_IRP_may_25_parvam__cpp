#include<stdio.h>
#include<string.h>
int main()
{
    int age;
    char Name[10];
    printf("ENTER THE NAME OF THE PORSON:");
    scanf("%s",Name);
    printf("ENTER THE AGE OF THE PORSON:");
    scanf("%d",&age);
    printf("%s_%d",Name,(age*2));
    return 0;

}