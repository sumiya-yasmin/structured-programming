//Given a number N and an array A of N digits (not separated by space). Print the summation of these digits
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    char strng[1000001];
    int sum=0;
     for(int i=0;i<n;i++){
        scanf(" %c", &strng[i]);
        sum=sum+(strng[i]-'0');
     }
     printf("%d", sum);
    return 0;
}