#ifndef  _STACK_DS_H_
#define  _STACK_DS_H_

#include "std_types.h"

#define STACK_MAX_SIZE  5

typedef struct
{
    uint32_t data[STACK_MAX_SIZE];
    uint32_t stack_pointer;

}stack_ds_t;



typedef enum
{
 STACK_FULL,
 STACK_EMPTY,
 STACK_NOT_FULL
} stack_status_t ;



 stack_init(stack_ds_t* my_stack);
 void  stack_push(stack_ds_t *my_stack,uint32_t value);
 uint32_t stack_pop(stack_ds_t *my_stack);
 uint32_t stack_top(stack_ds_t *my_stack);
  uint32_t stack_size(stack_ds_t *my_stack);
  void stack_display(stack_ds_t *my_stack);

















#endif
