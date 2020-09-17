#include <stdio.h>
#include <stdint.h>
#include <math.h>

// struct
struct vector {
    int x;
    int y;
    float length;
};

// prototypes
void reset_bit(int* x, int p);
void reset_two_bits(int* x, int p);
void set_bit(int* x, int p);
void set_two_bits_to(int* x, int p, int n);
void vector_length(struct vector* x);

// functions
int main ()
{
    int x;
    // reset_bit
    x = 0xF;
    reset_bit(&x, 2);
    printf("Result 1: %X\n", x);
    x = 0xA;
    reset_bit(&x, 2);
    printf("Result 2: %X\n", x);

    // reset_two_bits
    x = 0xFF;
    reset_two_bits(&x, 3);
    printf("Result 3: %X\n", x);
    x = 0xB7;
    reset_two_bits(&x, 3);
    printf("Result 4: %X\n", x);
    
    // set_bit
    x = 0xA;
    set_bit(&x, 0);
    printf("Result 5: %X\n", x);
    x = 0xE;
    set_bit(&x, 2);
    printf("Result 6: %X\n", x);
    
    // set_two_bit_to
    x = 0xFF;
    set_two_bits_to(&x, 3, 1);
    printf("Result 7: %X\n", x);
    x = 0xAF;
    set_two_bits_to(&x, 3, 2);
    printf("Result 8: %X\n", x);  
    
    struct vector a;
    a.x = 4;
    a.y = 2;
    vector_length(&a);
    printf("Result 9: %.2f\n", a.length);  
    
    return 0;
}

void reset_bit(uint32_t* x, uint8_t p)
{

}

void reset_two_bits(uint32_t* x, uint8_t p)
{

}

void set_bit(uint32_t* x, uint8_t p)
{

}

void set_two_bits_to(uint32_t* x, uint8_t p, uint8_t n)
{

}

void vector_length(struct vector* a)
{

}
