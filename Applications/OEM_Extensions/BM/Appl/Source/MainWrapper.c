/*------------------------------------------------------------------------------
|                                                                              |
|  Copyright (C) BMW AG 2015                                                |
|                                                                              |
|  MODULE    : MainWrapper.c                                                   |
|                                                                              |
|  PROJECT   : BMW AUTOSAR Core                                                |
|                                                                              |
|  PURPOSE   :                                                                 |
|                                                                              |
|  REMARKS   : ---                                                             |
|                                                                              |
|                                                                              |
|------------------------------------------------------------------------------|
|  DISCLAIMER:                                                                 |
|  As the program is not fully tested and qualified for series production      |
|  use, the user shall not be entitled to use the program in connection        |
|  with any series production. BMW provides the user with the program only     |
|  as sample application (for testing purposes).                               |
|                                                                              |
-------------------------------------------------------------------------------*/

#ifndef I_KNOW_THAT_THIS_CODE_IS_NOT_FOR_PRODUCTION
#error "the program must not be used in connection with series production"
#endif
#include "Bm.h"

int main( void )
{
   Bm_Main();

   while(1);
}
