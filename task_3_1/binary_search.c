#include<stdio.h>
#include<time.h>

int binsearch(int x, int v[], int n);

int main()
{
    clock_t begin = clock();

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    printf("find in array : %d\n", binsearch(2, arr, 20));
    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("time_spent : %f\n", time_spent);
    return 0;
}
int binsearch(int x, int v[], int n)
{
    int low, high, mid;

    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (x <= v[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    return v[low] == x ? low : -1; /* x не найден */
}
