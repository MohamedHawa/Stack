#include"stack_ds.h"
#include <stdio.h>
#include <stdlib.h>


// inaiatlization stack
stack_init(stack_ds_t* my_stack)
{
   if(NULL==my_stack)
   {
   printf("Error NULL==my_stack \n");
   }
    else
    {
   my_stack->stack_pointer=-1;
   printf("STACK IS READY  : \n");



    }


}

/// ////////////////////////////////////////////////////////
  static stack_status_t  stack_full(stack_ds_t *my_stack)
 {

  if((my_stack->stack_pointer)==(STACK_MAX_SIZE-1))
  {
    return STACK_FULL;
  }
  else
  {
        return STACK_NOT_FULL;

  }

 }

//////////////////////////////////////////////////////////////////////////////
 static stack_status_t  stack_empty(stack_ds_t *my_stack)
 {

  if((my_stack->stack_pointer)==-1)
  {
     return STACK_EMPTY;
  }
  else
  {
     return STACK_NOT_FULL;
  }

 }


/////////////////////////////////////////////////////////////////////////
  void  stack_push(stack_ds_t *my_stack,uint32_t value)
  {
    if(NULL==my_stack)
    {
      printf("Error NULL==my_stack \n");
    }

    else if((STACK_FULL)==stack_full(my_stack))
    {
       printf("Error STACK FULL \n");

    }

      else
      {
       my_stack->stack_pointer++;
       my_stack->data[my_stack->stack_pointer]=value;
       printf("the value %i pushed to the stack succsefully : \n", value);


      }

  }

///////////////////////////////////////////////////////////////
uint32_t stack_pop(stack_ds_t *my_stack)
{
    uint32_t ret=0;

    if(NULL==my_stack)
    {
        printf("Error NULL==my_stack \n");
    }

    else if((STACK_EMPTY)==stack_empty(my_stack))
    {
       printf("Error STACK IS EMPTY \n");
    }
    else
    {
   ret=my_stack->data[my_stack->stack_pointer];
   my_stack->stack_pointer--;
    return ret;


    }


}

///////////////////////////////////////////////////

 uint32_t stack_top(stack_ds_t *my_stack)
 {

  uint32_t result=0;

     if(NULL==my_stack)
     {

        printf("Error NULL==my_stack \n");
        return 0;

     }
      else if((STACK_EMPTY)==stack_empty(my_stack))
    {
       printf("Error STACK IS EMPTY \n");
               return 0;

    }
    else
    {
       result = (my_stack->data[my_stack->stack_pointer]);
       return result;
    }

 }
 //////////////////////////////////////////////////////////////
 uint32_t stack_size(stack_ds_t *my_stack)
 {
     unsigned int i=0;
     uint32_t  counter=0;


     if(NULL==my_stack)
     {

        printf("Error NULL==my_stack \n");
        return 0;

     }

         else if((STACK_EMPTY)==stack_empty(my_stack))
    {
       printf("Error STACK IS EMPTY \n");
               return 0;

    }

    else
    {
      for(i=0;i<(my_stack->stack_pointer);i++)
      {
         counter++;

      }
      return counter;

    }




 }
///////////////////////////////////////////////////////
void stack_display(stack_ds_t *my_stack)
 {
     unsigned int i=0;


     if(NULL==my_stack)
     {

        printf("Error NULL==my_stack \n");
        return 0;

     }

         else if((STACK_EMPTY)==stack_empty(my_stack))
    {
       printf("Error STACK IS EMPTY \n");
               return 0;

    }

    else
    {
      for(i=(my_stack->stack_pointer);i>=0;i--)
      {
         printf("%i\n",(my_stack->data[my_stack->stack_pointer]));
         my_stack->stack_pointer--;

      }


    }




 }
