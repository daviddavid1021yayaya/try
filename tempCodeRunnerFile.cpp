int power(int num, int pownum)
{
    int result = 1;
    for (int i = 0; i < pownum; i++)
    {
        result *= num;
    }
    return result;
}