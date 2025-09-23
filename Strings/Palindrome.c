// Given a string S. Determine whether S is Palindrome or not
// Note: A string is said to be a palindrome if the reverse of the string is same as the string. For example, "abba" is palindrome, but "abbc" is not palindrome.
#include<stdio.h>
int main()
{
    char s[1000];
scanf("%s", s);
int len = strlen(s);
int isPalindrome=1;
for(int i=0, j=len-1;i<j;i++, j--){
    if(s[i]!=s[j]){
      isPalindrome=0;
      break;
    }
}
if(isPalindrome){
    printf("YES");
}else{
    printf("NO");
}
    return 0;
}
