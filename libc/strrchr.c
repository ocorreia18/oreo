/* This code is part of oreo project, all rights reserved (See LICENSE)
 * Wrote by: "Gabriel Correia"
 * Created at: 2022/04/27
*/

#include "string.h"

#include "branch.h"

char_t* O_strchr(const char_t *dest, i32_t character)
{
  char_t *first = NULL;

  while (*dest != '\0' && *dest != character) dest++;

  if (*dest != '\0')
    /* The character has been found */
    first = (char_t*)dest;

  return first;
}

char_t* O_strrchr(const char_t *dest, i32_t character)
{
  char_t *last = NULL;

  do {
    while (*dest && *dest != (char_t)character) dest++;
    if (*dest)
      last = (char_t*)dest;
  } while (*dest++);

  return last;
}


