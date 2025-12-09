#include <stdio.h>
#include <stdint.h>

int is_divisible_by_pow2(uint32_t n, uint32_t divisor)
{
    // divisor must be power of 2
    return (n & (divisor - 1)) == 0;  // n&7; check 3 bits as 7=111 bit. Here extracts 3 bits via n&7 than check it
}

int main()
{
    uint32_t n = 64;    // test number

    uint32_t divisors[] = {2,4,8,16,32,64,128,256};
    int count = sizeof(divisors)/sizeof(divisors[0]);

    for(int i = 0; i < count; i++)
    {
        uint32_t d = divisors[i];

        if(is_divisible_by_pow2(n, d))
            printf("%u is divisible by %u\n", n, d);
        else
            printf("%u is NOT divisible by %u\n", n, d);
    }

    return 0;
}



// // ---- via mask logic------------------
// #include <stdio.h>
// #include <stdint.h>

// int is_divisible(uint32_t n, int k) 
// {
//     // k = power → divisor = 2^k
//     // mask = lowest k bits
//     uint32_t mask = (1U << k) - 1;

//     // If all lowest k bits are zero → divisible by 2^k
//     return ((n & mask) == 0);
// }

// int main() 
// {
//     uint32_t n = 64;

//     for (int k = 1; k <= 6; k++) {
//         uint32_t divisor = 1U << k;  // 2^k
//         if (is_divisible(n, k))
//             printf("%u is divisible by %u\n", n, divisor);
//         else
//             printf("%u is NOT divisible by %u\n", n, divisor);
//     }

//     return 0;
// }
