/*
Filename:       util.h
Author:         Jake Hoekstra
Date:           2/27/20
Description:    This is the header file for the functions defined in the 
                util.cpp file.
*/
#ifndef util_H_
#define util_H_
#include "heap.h"

char nextCommand(int *i, int *v, int *f);
void readFile(HEAP *heap);

#endif