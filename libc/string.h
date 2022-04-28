/* This code is part of OREO project, all rights reserved to the owners
 * Wrote by: [Gabriel Correia]
 * Create at: 2022/04/27
*/

#ifndef LIBC_STRING_H
#define LIBC_STRING_H

#include "stddef.h"

extern char_t* O_strrchr(const char_t* dest, i32_t character)
  __attribute__((nonnull(1)));

#endif


