// Left,Right shift via Bitwise
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
	uint32_t b = -0x12A;
//   Logic: Multiply left shift by that no. create function for it. right shift=divide by it.
	// int x= (a&1);
	int x= (a<<1);
	int y= (a>>1);
	printf("a  = ");	print_bits(a);	printf("   (%X)\n", a);
	printf("b  = ");	print_bits(b);	printf("   (%X)\n", b);
    printf("x  = ");    print_bits(x);	printf("   (%X)\n", x);
	printf("y  = ");    print_bits(y);  printf("   (%X)\n", y);



	return 0;
}
