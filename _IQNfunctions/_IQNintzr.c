/**
  * @file _IQNintzr.c   
  * @brief 
  * @author Leon Lee (leonlee.scut@outlook.com)
  * @version 0.1
  * @date 2026/08/19
  * 
  * @copyright Copyright (c) 2026 South China University of Technology.
  * All rights reserved.
  * 
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  * 
  * @par History:
  * 	Date		Version		Author			Description
  * 	2026/08/19	0.1			Leon Lee		Preliminary version.
  */

#include <stdint.h>

#include "../support/support.h"

__IQ_FXN int_fast32_t __IQNintzr(int_fast32_t iqNInput, int8_t q_value)
{
    uint_fast32_t half = (uint_fast32_t)1u << (q_value - 1);
    uint_fast32_t magnitude;
    uint_fast32_t rounded;

    magnitude = (iqNInput < 0) ? (uint_fast32_t)(-(iqNInput + 1)) + 1U
                               : (uint_fast32_t)iqNInput;

    rounded = (magnitude + half) >> q_value;

    return (iqNInput < 0) ? -(int_fast32_t)rounded
                          :  (int_fast32_t)rounded;
}

int32_t _IQ30intzr(int32_t A)
{
    return __IQNintzr(A, 30);
}

int32_t _IQ29intzr(int32_t A)
{
    return __IQNintzr(A, 29);
}

int32_t _IQ28intzr(int32_t A)
{
    return __IQNintzr(A, 28);
}

int32_t _IQ27intzr(int32_t A)
{
    return __IQNintzr(A, 27);
}

int32_t _IQ26intzr(int32_t A)
{
    return __IQNintzr(A, 26);
}

int32_t _IQ25intzr(int32_t A)
{
    return __IQNintzr(A, 25);
}

int32_t _IQ24intzr(int32_t A)
{
    return __IQNintzr(A, 24);
}

int32_t _IQ23intzr(int32_t A)
{
    return __IQNintzr(A, 23);
}

int32_t _IQ22intzr(int32_t A)
{
    return __IQNintzr(A, 22);
}

int32_t _IQ21intzr(int32_t A)
{
    return __IQNintzr(A, 21);
}

int32_t _IQ20intzr(int32_t A)
{
    return __IQNintzr(A, 20);
}

int32_t _IQ19intzr(int32_t A)
{
    return __IQNintzr(A, 19);
}

int32_t _IQ18intzr(int32_t A)
{
    return __IQNintzr(A, 18);
}

int32_t _IQ17intzr(int32_t A)
{
    return __IQNintzr(A, 17);
}

int32_t _IQ16intzr(int32_t A)
{
    return __IQNintzr(A, 16);
}

int32_t _IQ15intzr(int32_t A)
{
    return __IQNintzr(A, 15);
}

int32_t _IQ14intzr(int32_t A)
{
    return __IQNintzr(A, 14);
}

int32_t _IQ13intzr(int32_t A)
{
    return __IQNintzr(A, 13);
}

int32_t _IQ12intzr(int32_t A)
{
    return __IQNintzr(A, 12);
}

int32_t _IQ11intzr(int32_t A)
{
    return __IQNintzr(A, 11);
}

int32_t _IQ10intzr(int32_t A)
{
    return __IQNintzr(A, 10);
}

int32_t _IQ9intzr(int32_t A)
{
    return __IQNintzr(A, 9);
}

int32_t _IQ8intzr(int32_t A)
{
    return __IQNintzr(A, 8);
}

int32_t _IQ7intzr(int32_t A)
{
    return __IQNintzr(A, 7);
}

int32_t _IQ6intzr(int32_t A)
{
    return __IQNintzr(A, 6);
}

int32_t _IQ5intzr(int32_t A)
{
    return __IQNintzr(A, 5);
}

int32_t _IQ4intzr(int32_t A)
{
    return __IQNintzr(A, 4);
}

int32_t _IQ3intzr(int32_t A)
{
    return __IQNintzr(A, 3);
}

int32_t _IQ2intzr(int32_t A)
{
    return __IQNintzr(A, 2);
}

int32_t _IQ1intzr(int32_t A)
{
    return __IQNintzr(A, 1);
}
/************* (C) COPYRIGHT South China Univ. of Tech. ****** END OF FILE ****/
