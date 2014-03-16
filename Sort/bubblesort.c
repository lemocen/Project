/*
 * bubblesort.c - 
 *
 *
 * Author: lemocen (zhfayu1989.hotmail.com)
 * Create: 2014-03-16 14:39:04
 *
 */
#include <stdio.h>


#define ARRY_SIZE 5 


int main(int argc, const char *argv[])
{
    int i,j,max;
    float arry[] = {18.8,21.5,6.5,26.5};
    float temp = 0.0;
    for (i = 0; i < sizeof(arry)/sizeof(arry[0]); i++)
    {
        for (max = j = i; j < sizeof(arry)/sizeof(arry[0]);j++)
        {
            if (arry[j] > arry[max])
            {
                max = j;
            }

        }
        if (i!=max)
        {
            temp = arry[i];
            arry[i] = arry[max];
            arry[max] = temp ; 
        }
    }
    for (i = 0; i < sizeof(arry)/sizeof(arry[0]); i++)
    {
        printf("%f  ",arry[i]);
    }
    return 0;
}

