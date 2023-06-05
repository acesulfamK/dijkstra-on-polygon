for (k = 0; k < size; k++)
{
    int j;
    if (k != p)
    {
        printf("%d ", k);
        for (j = prev[k]; j != p; j = prev[j])
            printf("%d ", j);
    }
    printf("%d\n", p);
}
