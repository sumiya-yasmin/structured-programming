// Suppose there are M1 farmers who can complete a work in D days. Fortunately, some other farmers appard in the village before the start of the work, and now there are M2 additional farmers Can you determine how many fewer days it will take for them to complete the task?
// Note: If the answer is a floating value, take the integer part of the answer.
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    while(n--){
        int m1,m2, d;
        scanf("%d %d %d", &m1, &m2, &d);
        double days = ((double)d*m2)/(m1+m2);
        int fewer_days = (int)days;
        printf("%d\n", fewer_days);

    }
    return 0;
}