#ifndef BIT_OPS_H_INCLUDED
#define BIT_OPS_H_INCLUDED

#define bit_read(value, bit) (((value) >> (bit)) & 0x01)
#define bit_set(value, bit) ((value) |= (1UL << (bit)))
#define bit_clear(value, bit) ((value) &= ~(1UL << (bit)))
#define bit_toggle(value, bit) ((value) ^= (1UL << (bit)))
#define bit_write(value, bit, bitvalue) ((bitvalue) ? bitSet(value, bit) : bitClear(value, bit)

#endif