/*
Written notes
Data structure is a way to store and organize data in a computer, so that it can be used efficiently

List
 - Store a given number of element of any type 
 - Read elements by position
 - Modify element of a position
*/

#include <stdio.h>
#include <stdlib.h>

struct self_ref
{
    int data; //Member of structure
    struct self_ref *next; //declared a pointer to struct self_ref
};

/*
Primitive Data structre - int,float,char,double 
1.
2.

Non-Primitive - Two types 
                   -Linear  -> array,linked list
                   -Non-Linear -> Trees, Graphs
1.Contineous data is stored
2.
*/
//dsc updated

