#ifndef UTILITIES_H_INCLUDED
#define UTILITIES_H_INCLUDED

#define set_bit(reg,bit_no) reg|=(1 << bit_no)
#define clr_bit(reg,bit_no) reg&=~(1 << bit_no)
#define tog_bit(reg,bit_no) reg^=(1 << bit_no)
#define get_bit(reg,bit_no) ((reg >>bit_no) & 1)

#endif
