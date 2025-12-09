// To check Even or odd via Bitwise
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
//   Logic:  extract 0th bit if its set its odd  no., else its even
    // int x= (a&1);
    if((a&1)==1)
    printf("no. is odd");
    else if((a&1)==0) 
       printf("no. is Even");
    // printf("a  = "); print_bits(a); printf("   (%X)\n", a);
    

    return 0;
}
