// Given a string S. Determine how many times does each letter occurred in S.
#include <stdio.h>
#include <string.h>
char str[10000001];
int main()
{
    scanf("%s", str);
    int len = strlen(str);
    int freq[26] = {0};
    for (int i = 0; i < len; i++)
    {
        freq[str[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > 0)
        {
            printf("%c : %d\n", i + 'a', freq[i]);
        }
    }

    return 0;
}