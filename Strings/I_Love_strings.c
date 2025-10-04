// Given two strings S and T. Print a new string that contains the following:

// The first letter of the string S followed by the first letter of the string T.
// the second letter of the string S followed by the second letter of the string T.
// and so on...
// In other words, the new string should be ( S0 + T0 + S1 + T1 + .... ).
// Note: If the length of S is greater than the length of T then you have to add the rest of S letters at the end of the new string and vice versa.

#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    while (n--) 
    {
    char str1[51], str2[51];
    scanf("%s %s", str1, str2);
    char str3[101];
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int smallest_len = len1>len2 ? len2: len1;
    int k=0;

    for (int i = 0; i<smallest_len; i++)
    {
        str3[k++] = str1[i];
        str3[k++] = str2[i];
    }

    char *longer_str;
    int remaining_start_index;
    int longer_len;
    
    if(len1>len2){
        longer_str = str1;
        remaining_start_index = smallest_len;
        longer_len = len1;
    }else 
    {
        longer_str = str2;
        remaining_start_index = smallest_len;
        longer_len = len2;
    }
    
    for (int i =  remaining_start_index; i<longer_len;i++){
        str3[k++] = longer_str[i];
    }
    str3[k] = '\0';

    printf("%s\n", str3);
}
    return 0;
}