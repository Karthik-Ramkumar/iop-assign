#include <stdio.h>
int main()
{
    float no1,no2,no3;
    printf("input three numbers\n");
    scanf("%f%f%f",&no1,&no2,&no3);
    if(no1>no2)
    {
        if(no1>no3)
        {
            printf("%f is the largest number",no1);
        }
    }
    else if(no2>no3)
    {
        printf("%f is the largest number",no2);
    }
    else
    {
        printf("%f is the largest number",no3);
    }
    return 0;
}