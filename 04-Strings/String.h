/* String.h
 * Lucio Delelis
 * 20200411
 */

#ifndef __STRINGS_H__
#define __STRINGS_H__

#include <bits/stdint-uintn.h>
#include <stdint.h>
#include <stdbool.h>

/*
 * Precondicion de todas las funciones:
 * todas deben tener un string null-terminated
 * Es decir, que todos los strings deben finalizar en '\0'
 */

//GetLength: Σ* → ℤ_0
uint32_t GetLength(char* string);
//IsEmpty: Σ* → 𝔹
bool IsEmpty(char* string);
//Power: Σ* x ℤ_0 → Σ*
// Precondicion particular: el exponente debe ser >= 0
const char* Power(char* string, uint32_t exp);

//GetLength: Σ* → Σ*
const char* Reverse(char* string);

#endif
