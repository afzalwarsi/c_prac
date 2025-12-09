// Set, clear, toggle bit logic


//--------------Optimized Version--------------------

#include <stdio.h>
#include <stdint.h>

void print_bits(uint32_t n)
{
    for (int i = 31; i >= 0; i--)
        printf("%d", (n >> i) & 1);
}

int main()
{
    uint32_t a = 0x12A;    // 0001 0010 1010

    // 1. Set bit 0
    uint32_t x = a | (1 << 0);

    // 2. Clear bit 0
    uint32_t y = a & ~(1 << 0);

    // 3. Toggle bit 0
    uint32_t z = a ^ (1 << 0);

    printf("a  = "); print_bits(a); printf("   (%X)\n", a);
    printf("x  = "); print_bits(x); printf("   (%X)\n", x);
    printf("y  = "); print_bits(y); printf("   (%X)\n", y);
    printf("z  = "); print_bits(z); printf("   (%X)\n", z);

    return 0;
}


// -------------------------------------------------


// //------ unoptimized version-----------------

// #include <stdio.h>
// #include <stdint.h>

// int main()
// {  int a = 0x12A;
// // important step;


//  // its binary : 0001 0010 1010

// // 1. Set bit: ( | ) make it 1
//      // setting 0th bit to 1
//      int x= a | (1<<0);
// // 2. Clear a bit : ( & ) make it to 0th
//      // cleared 0th bit that was set
//     int y= a& ~(1<<0);
// // 3. Toggle the bit:
//     // toggling bit 0: if on than off, vice versa
    
//     uint16_t z= a ^ (1<<0);


// // issue with print logic will replace current  variable value to zero
// // instead use a function
// // Just printing-----     
// int temp=a;  // to prevent destruction of a;
//     for (int i=31; i>=0;i--)
//     {
//      printf("%d", (temp)&1);
//      temp=temp>>1;
//     }
//  //----------------------    
//     printf(" \n%X ", a);
//     printf("\n %x ", x);
//     printf("\n");
    
//     temp=x;  // to prevent destruction of x;
//     for (int i=31; i>=0;i--)
//     {
//      printf("%d", (temp)&1);
//      temp=temp>>1;
//     }
// // Till here just Print----------
// // y : clear bit print check------
//  printf("\n");
//  temp=y;  // to prevent destruction of y;
//     for (int i=31; i>=0;i--)
//     {
//      printf("%d", (temp)&1);
//      temp=temp>>1;
//     }
// //---------------------------------

// // z : Toggle bit print check------
//   temp=z;  // to prevent destruction of z;
//    printf("\n");

//     for (int i=31; i>=0;i--)
//     {
//      printf("%d", (temp)&1);
//      temp=temp>>1;
//     }

// //---------------------------------

//     return 0;
// }