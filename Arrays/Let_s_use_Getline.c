//Given a string S. Print the string S from the beginning to the first '\' character without printing the '\'.
#include<stdio.h>
int main()
{
    char str[1000001];
    fgets(str,1000001,stdin);
    for(int i=0;str[i]!='\\';i++){
        printf("%c", str[i]);
    }
    return 0;
}