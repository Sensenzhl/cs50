#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int start_size;
    do 
    {
        start_size = get_int("Start size:");
    }
    while (start_size < 9);

    int End_size;
    do
    {
        End_size = get_int("End size:");
    }
    while (End_size < start_size);

    int Years = 0;

    float c = (((double)4/3) - ((double)1/4));

    printf("c: %.50f \n",c);

    for(float size=start_size;size < End_size; size = size * c)
    {
        Years = Years + 1;
        //printf("c: %f \n",c);
        //printf("size: %f \n",size);
        //printf("size2: %f \n",(float)(4/3 - 1/4));
        //printf("Years: %d \n",Years);
    }

    printf("Years: %d \n",Years);
}