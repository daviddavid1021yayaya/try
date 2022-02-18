#include <stdio.h>
int main()
{
    FILE *fpointer = fopen("rasengan.txt", "a");

    for (int i = 0; i < 30; i++)
    {

        fprintf(fpointer, "i can help\n");
    }

    fclose(fpointer);
    return 0;
}