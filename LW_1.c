#include <stdio.h>

int main()
{
    int x = 0 , y = 0;
    scanf("%d",&x);
    for (int i = 1; i <= 10; i++) {
        y = y + (i+1) * function(x,i);
    }
    y = y + 1;
    printf("%d",y);
    return 0;
}

int function(x,i)
{
    int step = x;
    for (int l = 1; l < i; l++) 
    {
        step =  step * x;
    }
    return step;
}
