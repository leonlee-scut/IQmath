#ifndef __RTS_SUPPORT_H__
#define __RTS_SUPPORT_H__

#include "cmsis_compiler.h"

#ifndef __IQ_FXN
#define __IQ_FXN        __STATIC_FORCEINLINE
#endif /* __IQ_FXN */

////////////////////////////////////////////////////////////
//                                                        //
//              MPY32 control functions.                  //
//                                                        //
////////////////////////////////////////////////////////////
__IQ_FXN void __mpy_start(uint_fast16_t *ui16IntState, uint_fast16_t *ui16MPYState)
{
    /* Do nothing. */
    return;
}

__IQ_FXN void __mpyf_start(uint_fast16_t *ui16IntState, uint_fast16_t *ui16MPYState)
{
    /* Do nothing. */
    return;
}

__IQ_FXN void __mpyfs_start(uint_fast16_t *ui16IntState, uint_fast16_t *ui16MPYState)
{
    /* Do nothing. */
    return;
}

__IQ_FXN void __mpy_clear_ctl0(void)
{
    /* Do nothing. */
    return;
}

__IQ_FXN void __mpy_set_frac(void)
{
    /* Do nothing. */
    return;
}

__IQ_FXN void __mpy_stop(uint_fast16_t *ui16IntState, uint_fast16_t *ui16MPYState)
{
    /* Do nothing. */
    return;
}

////////////////////////////////////////////////////////////
//                                                        //
//                16-bit functions                        //
//                                                        //
////////////////////////////////////////////////////////////
__IQ_FXN int_fast16_t __mpy_w(int_fast16_t arg1, int_fast16_t arg2)
{
    return (arg1 * arg2);
}

__IQ_FXN uint_fast16_t __mpy_uw(uint_fast16_t arg1, uint_fast16_t arg2)
{
    return (arg1 * arg2);
}

__IQ_FXN int_fast32_t __mpyx_w(int_fast16_t arg1, int_fast16_t arg2)
{
    return ((int_fast32_t)arg1 * (int_fast32_t)arg2);
}

__IQ_FXN uint_fast32_t __mpyx_uw(uint_fast16_t arg1, uint_fast16_t arg2)
{
    return ((uint_fast32_t)arg1 * (uint_fast32_t)arg2);
}

__IQ_FXN int_fast16_t __mpyf_w(int_fast16_t arg1, int_fast16_t arg2)
{
    return (int_fast16_t)(((int_fast32_t)arg1 * (int_fast32_t)arg2) >> 15);
}

__IQ_FXN int_fast16_t __mpyf_w_reuse_arg1(int_fast16_t arg1, int_fast16_t arg2)
{
    /* This is identical to __mpyf_w */
    return (int_fast16_t)(((int_fast32_t)arg1 * (int_fast32_t)arg2) >> 15);
}

__IQ_FXN uint_fast16_t __mpyf_uw(uint_fast16_t arg1, uint_fast16_t arg2)
{
    return (uint_fast16_t)(((uint_fast32_t)arg1 * (uint_fast32_t)arg2) >> 15);
}

__IQ_FXN uint_fast16_t __mpyf_uw_reuse_arg1(uint_fast16_t arg1, uint_fast16_t arg2)
{
    /* This is identical to __mpyf_uw */
    return (uint_fast16_t)(((uint_fast32_t)arg1 * (uint_fast32_t)arg2) >> 15);
}

__IQ_FXN int_fast32_t __mpyfx_w(int_fast16_t arg1, int_fast16_t arg2)
{
    return (((int_fast32_t)arg1 * (int_fast32_t)arg2) << 1);
}

__IQ_FXN int_fast32_t __mpyfx_uw(uint_fast16_t arg1, uint_fast16_t arg2)
{
    return (((uint_fast32_t)arg1 * (uint_fast32_t)arg2) << 1);
}


////////////////////////////////////////////////////////////
//                                                        //
//                 32-bit functions                       //
//                                                        //
////////////////////////////////////////////////////////////
__IQ_FXN int_fast32_t __mpy_l(int_fast32_t arg1, int_fast32_t arg2)
{
    return (arg1 * arg2);
}

__IQ_FXN uint_fast32_t __mpy_ul(uint_fast32_t arg1, uint_fast32_t arg2)
{
    return (arg1 * arg2);
}

__IQ_FXN int_fast64_t __mpyx(int_fast32_t arg1, int_fast32_t arg2)
{
    return ((int_fast64_t)arg1 * (int_fast64_t)arg2);
}

__IQ_FXN uint_fast64_t __mpyx_u(uint_fast32_t arg1, uint_fast32_t arg2)
{
    return ((uint_fast64_t)arg1 * (uint_fast64_t)arg2);
}

__IQ_FXN int_fast32_t __mpyf_l(int_fast32_t arg1, int_fast32_t arg2)
{
    return (int_fast32_t)(((int_fast64_t)arg1 * (int_fast64_t)arg2) >> 31);
}

__IQ_FXN int_fast32_t __mpyf_l_reuse_arg1(int_fast32_t arg1, int_fast32_t arg2)
{
    /* This is identical to __mpyf_l */
    return (int_fast32_t)(((int_fast64_t)arg1 * (int_fast64_t)arg2) >> 31);
}

__IQ_FXN uint_fast32_t __mpyf_ul(uint_fast32_t arg1, uint_fast32_t arg2)
{
    return (uint_fast32_t)(((uint_fast64_t)arg1 * (uint_fast64_t)arg2) >> 31);
}

__IQ_FXN int_fast32_t __mpyf_ul_reuse_arg1(uint_fast32_t arg1, uint_fast32_t arg2)
{
    /* This is identical to __mpyf_ul */
    return (uint_fast32_t)(((uint_fast64_t)arg1 * (uint_fast64_t)arg2) >> 31);
}

__IQ_FXN int_fast64_t __mpyfx(int_fast32_t arg1, int_fast32_t arg2)
{
    return (((int_fast64_t)arg1 * (int_fast64_t)arg2) << 1);
}

__IQ_FXN uint_fast64_t __mpyfx_u(uint_fast32_t arg1, uint_fast32_t arg2)
{
    return (((uint_fast64_t)arg1 * (uint_fast64_t)arg2) << 1);
}

#endif /* __RTS_SUPPORT_H__ */
