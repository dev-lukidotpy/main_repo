#include <stdio.h>
#include <stdlib.h>

/*
Quicksort implementation in C, recursive method

Quicksort implements divide-and-conquer technique, in which a large problem is divided into smaller pieces and then solved by the same algorithm

1. Choose an array element e (the “partitioning element”), then rearrange the
array so that elements 1, …, i – 1 are less than or equal to e, element i contains e, and elements i + 1, …, n are greater than or equal to e.
2. Sort elements 1, …, i – 1 by using Quicksort recursively.
3. Sort elements i + 1, …, n by using Quicksort recursively.

The algorithm relies on two “markers” named low and high, which keep track of positions within the array.
Initially, low points to the first element of the array and high points to the last element.

We start by copying the first element (the partitioning element) into a temporary location elsewhere, leaving a “hole” in the array.
Next, we move high across the array from right to left until it points to an element that’s smaller than the partitioning element.

We then copy the element into the hole that low points to, which creates a new hole (pointed to by high).
We now move low from left to right, looking for an element that’s larger than the partitioning element.
When we find one, we copy it into the hole that high points to.

The process repeats, with low and high taking turns, until they meet somewhere in the middle of the array.
At that time, both will point to a hole; all we need do is copy the partitioning element into the hole.
*/

#include <stdio.h>

#define N 10

void quicksort(int a[], int low, int high);
int divide(int a[], int low, int high);

int main() {
    int a[N], i;

    printf("Enter %d numbers to be sorted: ", N);
    for (i = 0; i < N; i++)
        scanf("%d", &a[i]);

    quicksort(a, 0, N - 1);

    printf("In sorted order: ");

    for (i = 0; i < N; i++)
        printf("%d ", a[i]);

    printf("\n");

    return 0;
}

void quicksort(int a[], int low, int high) {
    int middle;

    if (low >= high)
        return;

    middle = divide(a, low, high);
    quicksort(a, low, middle - 1);
    quicksort(a, middle + 1, high);
}

int divide(int a[], int low, int high) {
    int part_element = a[low];

    while (1) {
        while (low < high && part_element <= a[high])
            high--;

        if (low >= high)
            break;

        a[low++] = a[high];

        while (low < high && a[low] <= part_element)
            low++;

        if (low >= high)
            break;

        a[high--] = a[low];
    }

    a[high] = part_element;

    return high;
}
