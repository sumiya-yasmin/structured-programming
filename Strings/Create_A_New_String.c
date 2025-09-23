//Given two strings S and T. Print 2 lines that contain the following in the same order:
// Print the length of S and T separated by space.
// Print a new string that contains S and T separated by a space.
#include<stdio.h>
int main()
{
    char s[1001];
    char t[1001];
    scanf("%s", s);
    scanf("%s", t);
    int length_s=strlen(s);
    int length_t=strlen(t);
    printf("%d %d\n", length_s, length_t);
    printf("%s %s", s, t);
    return 0;
}