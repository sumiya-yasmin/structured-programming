//Given two strings A and B. Print three lines contain the following:

// The size of the string A and size of the string B separated by a space
// The string produced by concatenating A and B (A + B).
// The two strings separated by a single space respectively, after swapping their first character.
#include<stdio.h>
int main()
{
    char s1[11], s2[11];
    scanf("%s %s", s1,s2);
    int len1=strlen(s1);
    int len2=strlen(s2);
    printf("%d %d\n",len1,len2);
    char s3[11+11];
    for(int i=0;i<len1;i++){
        s3[i]=s1[i];
    }
    for(int i=0;i<len2;i++){
        s3[i+len1]=s2[i];
    }
    s3[len1 + len2] = '\0';
    printf("%s\n", s3);
    char temp;
    temp= s1[0];
    s1[0]=s2[0];
    s2[0]=temp;
    printf("%s %s", s1,s2);


    return 0;
}