#include <stdio.h>

int main() {
    int p, q, i = 0, j = 0, k = 0;

    printf("Enter number of entries in server 1: ");
    scanf("%d", &p);
    int a[p];

    printf("Enter sorted arrival times of server 1:\n");
    for (i = 0; i < p; i++)
        scanf("%d", &a[i]);

    printf("Enter number of entries in server 2: ");
    scanf("%d", &q);
    int b[q];

    printf("Enter sorted arrival times of server 2:\n");
    for (i = 0; i < q; i++)
        scanf("%d", &b[i]);

    int c[p + q];   // merged array

    i = 0; 
    j = 0;

    while (i < p && j < q) {
        if (a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }

    while (i < p)
        c[k++] = a[i++];

    while (j < q)
        c[k++] = b[j++];

    printf("Merged chronological log:\n");
    for (i = 0; i < p + q; i++)
        printf("%d ", c[i]);

    return 0;
}
