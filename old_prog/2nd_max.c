// Find 1st and 2nd max element
//When finding the second-largest number, you must use the else if because it handles the case 
//where a value is not the largest, but still bigger than the current second largest. Without 
//it, you only update max2 when a new overall maximum appears, and you completely miss numbers
//that belong in the second-largest spot. Imagine the array {50, 40, 45}. With correct logic, 
//the flow is: 50 becomes max1, then 40 becomes max2, and finally 45 replaces max2 because it 
//lies between 50 and 40. Result: second largest = 45. But if you remove the else if, then only
// 50 updates max1/max2. Both 40 and 45 get ignored, so max2 never updates and you'll end up 
//with garbage or an incorrect value. This one example shows why that second condition is the 
//real hero: it sees the “almost biggest” numbers the first if will always miss.

#include <stdio.h>

int main() {
    int arr[] = {23, 43, 65, 234, 24, 342};
    int len = sizeof(arr) / sizeof(arr[0]);

    int max1 = arr[0];
    int max2 = arr[0];

    for (int i = 1; i < len; i++) {
        if (arr[i] > max1) {
            max2 = max1;      // old max becomes 2nd max
            max1 = arr[i];    // new max

            // elseif condition is important to avoid same element,
            //
        } 
        //     else if(max2<arr[i] && arr[i]<max1 )
       //    max2= arr[i];

        else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];    // update second max
        }
    }

    printf("Largest element: %d\n", max1);
    printf("Second largest: %d\n", max2);

    return 0;
}
