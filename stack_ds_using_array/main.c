#include <stdio.h>
#include <stdlib.h>

#include"stack_ds.h"
#include"std_types.h"

stack_ds_t  my_stack;


int main()
{
    uint32_t return_pop_value=0;
    uint32_t return_max_stack_pointer=0;
    uint32_t return_counter=0;



printf(".............STACK................\n");
    ///////////////////////
     stack_init(&my_stack);

printf("========================\n");

    stack_push(&my_stack,20);
    stack_push(&my_stack,30);
    stack_push(&my_stack,40);
    stack_push(&my_stack,50);
    stack_push(&my_stack,60);

printf("========================\n");

//    return_pop_value=stack_pop(&my_stack);
//    printf("the pop value is %i\n",return_pop_value);
//
//     return_pop_value=stack_pop(&my_stack);
//    printf("the pop value is %i\n",return_pop_value);
//
//     return_pop_value=stack_pop(&my_stack);
//    printf("the pop value is %i\n",return_pop_value);
//
//     return_pop_value=stack_pop(&my_stack);
//    printf("the pop value is %i\n",return_pop_value);
//
//     return_pop_value=stack_pop(&my_stack);
//    printf("the pop value is %i\n",return_pop_value);

printf("========================\n");


//
//
//return_max_stack_pointer=stack_top(&my_stack);
//printf("the max value in the stack is %i\n",return_max_stack_pointer);


printf("========================\n");

//return_counter=stack_size(&my_stack);
//printf("the max index of  value in the stack is %i\n",return_counter);

printf("========================\n");

 stack_display(&my_stack);



    return 0;
}
