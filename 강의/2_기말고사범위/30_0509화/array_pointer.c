#include <stdio.h>

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    printf("%d\n", *(a + 2));
    printf("%d\n", *(&a[0] + 2));
    return 0;
}
