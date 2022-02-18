#include <stdio.h>
int main()
{
    int nums[3][2][3] = {0, 1, 2,
                         3, 4, 5,

                         6, 7, 8,
                         9, 10, 11,

                         12, 13, 14,
                         15, 16, 17};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                printf("%d", nums[i][j][k]);
            }
            printf(" 第一空行 \n");
        }
        printf(" 第二空行 \n");
    }

    return 0;
}