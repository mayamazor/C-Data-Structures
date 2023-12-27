#ifndef __BIT_ARRAY_H__
#define __BIT_ARRAY_H__
#include <stddef.h> /* size_t */

typedef size_t bitarr_t;

/* 
	index should be between 0 and 63 
	value should be 0 or 1
*/

/* Flip the value of an indexed bit */
bitarr_t FlipBit(bitarr_t bitarr, size_t index);

/* Set the bit at index location to value*/
bitarr_t SetBit(bitarr_t bitarr, size_t index, int value);

/* Set the bit on at index location*/
bitarr_t SetOnBit(bitarr_t bitarr,size_t index);

/* Set off the bit at index location*/
bitarr_t SetOffBit(bitarr_t bitarr,size_t index);

/* Set all bits on */
bitarr_t SetOnAll (bitarr_t bitarr);

/* Set off all bits */
bitarr_t SetOffAll(bitarr_t bitarr);

/* Gets the bit at index location */
int GetBit(bitarr_t bitarr, size_t index);

/* Count all the bits that are on */
size_t CountOnBits(bitarr_t bitarr);

/* Count all the bits that are Off */
size_t CountOffBits(bitarr_t bitarr);

/* Rotate the bits Left num times */
bitarr_t RotateLeft(bitarr_t bitarr, size_t num);

/* Rotate the bits Right num times */
bitarr_t RotateRight(bitarr_t bitarr, size_t num);

/* Mirror the bit array */
bitarr_t BitArrMirror(bitarr_t);

void reverse(char *string, int index_i, int index_j);

#endif /* __BIT_ARRAY_H__*/



