#include <math.h>
#include <stdio.h>
int main()
{
    int low, high, num, ogNum, rem, count = 0, result = 0;

    printf("enter two numbers: ");
    scanf("%d %d", &low, &high);
    printf("armstrong numbers between %d and %d are: ", low, high);

    if (high < low)
    {
        high += low;
        low = high - low;
        high -= low;
    }
    for (num = low + 1; num < high; ++num)
    {
        ogNum = num;

        while (ogNum != 0)
        {
            ogNum /= 10;
            ++count;
        }
        ogNum = num;

        while (ogNum != 0)
        {
            rem = ogNum % 10;
            result += pow(rem, count);
            ogNum /= 10;
        }
        if ((int)result == num)
        {
            printf("%d ", num);
        }

        count = 0;
        result = 0;
    }
    return 0;
}
