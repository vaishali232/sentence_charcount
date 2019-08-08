#include<stdio.h>
int main()
{
char s[10000];
long long int n,count=0,i;
scanf("%[^\n]s",&s);
n=strlen(s);
for(i=0;i<n;i++)
{
    if(s[i]!=' ')
    {
        count++;
    }
}
printf("%lld",count);
