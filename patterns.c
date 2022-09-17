/*
 ************************************************************************
 * @file        : Patterns.c
 * @author      : Tarek Ahmed Allam
 * @breif       : patters Using Numners
 ************************************************************************
 */

 /* ************************ INCLUDES SECTION START ******************* */
#include <stdio.h>
#include <stdlib.h>

#include "error_state.h"
#include "patterns.h"
 /* ************************ INCLUDES SECTION END ********************* */


 /* ********************************* PYRAMIDS ********************************** */

 ES_T half_Pyramid_numbers (signed int max_Number)
 {
    unsigned int counter_1 , counter_2 , counter_3 = 0 ;
    char error_State = ES_NOK;
    if (max_Number>0)
    {
         for (counter_1 = 0 ; counter_1 < max_Number ; counter_1++)
         {
             for (counter_2 = 0 ; counter_2 <= counter_3 ; counter_2++ )
             {
                 printf("%i",( counter_2 + 1 ));
             }
             printf("\n");
             counter_3++;
         }
         error_State = ES_OK ;
    }
    else
    {
        error_State = ES_OUT_OF_RANGE ;
    }
        return error_State;
 }

 /* ***************************************************************************** */

 ES_T inverted_Half_Pyramid (signed int max_Number)
 {
    unsigned int counter_1 , counter_2 , counter_3 = 0   ;
    char error_State = ES_NOK;

    if (max_Number>0)
    {
         for (counter_1 = 0 ; counter_1 <= max_Number  ; counter_1++)
         {
             for (counter_2 = 0 ; counter_2 < (max_Number - counter_3) ; counter_2++ )
             {
                 printf("%i",( counter_2 + 1 ));
             }
             printf("\n");
             counter_3++;
         }
         error_State = ES_OK ;
    }

    else
    {
        error_State = ES_OUT_OF_RANGE ;
    }




     return error_State;

 }

/* ************************************************************************** */

ES_T hollow_Half_Pyramid (signed int max_Number)
{
    unsigned int row_Number , column_Number  ;
    char error_State = ES_NOK;

    if (max_Number > 0)
    {
         for (row_Number = 0 ; row_Number < max_Number ; row_Number++)
         {
             if (row_Number < (max_Number - 1 ))
             {
                 for (column_Number = 0 ; column_Number <= (row_Number)  ; column_Number++ )
                 {

                       if ( column_Number == 0 || column_Number == (row_Number  ))
                       {
                         printf("%i",( column_Number +1 ));
                       }
                       else
                       {
                           printf(" ");
                       }
                 }
             }
             else
             {
                 for (column_Number = 1 ; column_Number <= max_Number ; column_Number++ )
                 {
                     printf("%i",( column_Number ));
                 }
            }
                 printf("\n");
        }
         error_State = ES_OK ;
    }
    else
    {
        error_State = ES_OUT_OF_RANGE ;
    }
        return error_State;




     return error_State;
}
 /* ********************************************************************************************* */

 ES_T fall_Pyramid ( signed int max_Number)
 {
    signed int row_Number , column_Number , center_Row = ( max_Number / 2 ) , counter_4 = 1 , counter_5 =0 ;
    char error_State = ES_NOK;

    if (max_Number > 0)
    {
         for (row_Number = 1 ; row_Number < max_Number ; row_Number++)
         {
             for (column_Number = 1 ; column_Number <= (max_Number -  row_Number)  ; column_Number++ )
             {
                   printf(" ");

             }
             for (column_Number = 1 ;  column_Number <= ( row_Number * 2 - 1 ) ; column_Number++ )
             {
                 if ( column_Number <= ( row_Number ) )
                 {
                 printf ("%i",(row_Number + column_Number - 1));
                 }
                 else
                 {
                     printf("%i",((row_Number*2) -2 - ( counter_5 )));
                     counter_5++ ;
                 }
             }
             printf("\n");
             counter_5 =0;
         }


         error_State = ES_OK ;
    }
    else
    {
        error_State = ES_OUT_OF_RANGE ;
    }
        return error_State;




     return error_State;

 }

 /* ************************************************************************************* */

 ES_T hollow_Full_Pyramid (signed int max_Number)
 {
    signed int row_Number , column_Number  ,center_Row = max_Number/2 , counter_5 =0, counter_4 ;
    char error_State = ES_NOK;

    if (max_Number > 0)
    {
         for (row_Number = 1 ; row_Number <= max_Number ; row_Number++)
         {
             if (row_Number!=(max_Number))
             {
             for (column_Number = 1 ; column_Number <= (max_Number - row_Number)  ; column_Number++ )
             {
                   printf(" ");

             }
             for (column_Number = 1 ; column_Number <= ((row_Number+counter_5)*2)  ; column_Number++ )
             {
                   if (column_Number == 1 )
                   printf("%i",column_Number);

                   else if(column_Number == ((row_Number)*2)&& counter_5 !=0)
                   printf("%i",row_Number);

                   else
                   {
                        printf(" ");
                   }

             }

             }
             else
             {
                 for (column_Number = 1 ; column_Number <= max_Number  ; column_Number++ )
                 {
                  printf(" %i",column_Number);
                 }


             }

             printf("\n");
             counter_5 +=2;
         }


         error_State = ES_OK ;
    }
    else
    {
        error_State = ES_OUT_OF_RANGE ;
    }
        return error_State;




     return error_State;


 }

 /* ********************************************************************** */

 ES_T hollow_Inverted_Half_Pyramid ( signed int max_Number)
 {
    unsigned int row_Number , column_Number , counter_3 = 0   ;
    char error_State = ES_NOK;

    if (max_Number>0)
    {
         for (row_Number = 0 ; row_Number <= max_Number  ; row_Number++)
         {
             for (column_Number = 1 ; column_Number <= (max_Number - counter_3) ; column_Number++ )
             {
                 if (row_Number == 0 || row_Number == max_Number)
                 {
                 printf("%i",( column_Number ));
                 }
                 else if (column_Number == 1 || column_Number == (max_Number - counter_3  ))
                 {
                     printf("%i",(row_Number+column_Number));
                 }
                 else
                 {
                     printf(" ");
                 }
             }

             printf("\n");
             counter_3++;
         }
         error_State = ES_OK ;
    }

    else
    {
        error_State = ES_OUT_OF_RANGE ;
    }




     return error_State;

 }





 /*
 **********************************************************
 User           Date                    Brief
 **********************************************************
 Tarek Allam    15sep                   Adding Rectangles
 Tarek Allam    15sep                   Adding half and Full Pyramids
 */
