// Given a string S. Print the origin string if it's not too long otherwise, print the special abbreviation.

// Note: The string is called too long, if its length is strictly more than 10 characters. If the string is too long then you have to print the string in the following manner:

// Print the first character in the string.
// Print number of characters between the first and the last characters.
// Print the last character in the string.
#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--){
        char s[101];
        scanf("%s", s);
        int len = strlen(s);
        if(len>10){
        printf("%c%d%c\n",s[0],len-2,s[len-1]);
        }else{
            printf("%s\n", s);
        }
    }
    return 0;
}