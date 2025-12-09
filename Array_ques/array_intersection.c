#include <stdio.h>

void print_intersection(int a[], int n, int b[], int m) {
    int freq[10001] = {0};   // assuming array values are within 0–10000

    // Count elements of array a[]
    for (int i = 0; i < n; i++)
        freq[a[i]]++;

    // Traverse array b[] and print those that appear in a[]
    for (int i = 0; i < m; i++) {
        if (freq[b[i]] > 0) {
            printf("%d ", b[i]);
            freq[b[i]] = 0;    // prevent printing duplicates. 
            // if want duplicated character dont do it
        }
    }
}

int main() {
    int a[] = {1, 2, 2, 3, 4};
    int b[] = {2, 2, 3, 5};

    int n = sizeof(a)/sizeof(a[0]);
    int m = sizeof(b)/sizeof(b[0]);

    print_intersection(a, n, b, m);
    return 0;
}


// Another Approacj: 2pointer approach:---------

// void intersection_sorted(int a[], int n, int b[], int m) {
//     int i = 0, j = 0;

//     // assume both arrays already sorted

//     while (i < n && j < m) {
//         if (a[i] < b[j]) {
//             i++;
//         }
//         else if (a[i] > b[j]) {
//             j++;
//         }
//         else {
//             printf("%d ", a[i]);
//             i++;
//             j++;
//         }
//     }
// }
