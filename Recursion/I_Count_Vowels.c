// Given a string S. Print number of vowels in the string.
// Vowel letters: ['a', 'e', 'i', 'o', 'u'].
// Vowel letters could be capital or small.
// Solve this problem using recursion.
// Only one line containing a string S (1 ≤ |S| ≤ 200)
// where |S| is the length of the string and it consists only of capital ,small letters and
#include <stdio.h>
int printVowel(char s[], int i)
{
    int count = 0;
    if (s[i] == '\0')
    {
        return 0;
    }
    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
    {
        count=1;
    }
    return count + printVowel(s, i+1);
}
    
int main()
{
    char s[201];
    fgets(s, 201, stdin);
    int count = printVowel(s, 0);
    printf("%d", count);
    return 0;
}