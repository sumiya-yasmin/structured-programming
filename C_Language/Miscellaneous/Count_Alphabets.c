// You will be given a string S as input. The string will contain only English small alphabets and will not contain any spaces.
// You need to tell how many time each alphabets from a to z appears.
// But if the count is zero, you don't need to prin that.
#include <stdio.h>
int main()
{
    char s[10000];
    scanf("%s", s);
    int len = strlen(s);
    int count[26] = {0};
    for (int i = 0; i < len; i++)
    {
        count[s[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (count[i] > 0)
        {
            char alphabet = i + 'a';
            printf("%c : %d\n", alphabet, count[i]);
        }
    }
    return 0;
}