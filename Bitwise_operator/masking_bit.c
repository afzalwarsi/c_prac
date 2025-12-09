//-------- MAsking: isolating, Extracting a bit ----------

//A mask defines which bits you want to keep, and which bits you want to clear.
//   Masking is the act of applying a mask to a value.
// Masking Bits (covering)
// In binary, hexadecimal,char, int etc type than do mask

//the process of modifying and utilizing binary representations of numbers or any other data is known as bitmasking.

//0xF00: The mask itself, written in hexadecimal notation. In binary, 0xF00 is 1111 0000 0000 (1s in the 9th through 12th bit positions, 
// counting from the right)


// Extracting  bits
#include <stdio.h>

int main()
{  
    int a = 0x12A;
    // its binary :  0001 0010 1010


     // Isolation/Extraction/ Mask  of single bit

// 1 Bit extract in Decimal Value     
    //  int x = a & (1<<3); 
// 1 Bit extract:
        int x = (a>>3) & 1; 
// Multiple bit extract: 12 to 16 example
    //  x= a & 0xFF00;
    printf(" %X ", a);
    printf("\n %x ", x);

    return 0;
}







// #include <stdio.h>

// int main()
// {
//   int x1=0xABCD;

//   // 1. Bit Masking  : a= x&1; 1st bit masked(Extracted; x&0xF000); 12 to 16 bit masked(extracted)
//   int x= (x1 & 0xF000) >>12;  // since we want it at 12th to 16  . from 16-12 bit to 4 to 0 bit; therefore :12 bit difference shifted by12
//   int y= (x1 & 0x0F00) >> 8;
//   int z= (x1 & 0x00F0) >> 4;
//   int l= (x1 & 0x000F);
//   int q= 0x0000;
//   // Directly done via or no need for shifting 1// thats for  single bit
//   q=q | 0XFF00;

//    printf("\nQ value is  %x", q);
//   int rev= (l<<12|z<<8|y<<4|x);
//   // or  Nopeif not shift than a>>12 | b>>8 | c>>4 | d;
//  printf("\nReversed value is  %x", rev);
//  printf("Reversed value is  %b", rev);
//     return 0;
// }


//--- Masking multiple bit ----
//isolate a single bit or group of bits from an integer?

// #include <stdio.h>

// int main()
// {  int a = 0x12345678;
     
//      // Isolation/Extraction/ Mask  of single bit
     
//      int x = x & 0xFF; 
     
//     printf(" %X ", a);
//     printf("\n %x ", x);

//     return 0;
// }//isolate a single bit or group of bits from an integer?




