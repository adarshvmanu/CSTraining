#include <stdio.h>
void main()
{
    int n;
    scanf("%d", &n);
    int arr[101], i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int Freq[101] = {0};
    for (i = 0; i < n; i++)
    {
        printf("%d", Freq[arr[i]]++);
    }
}