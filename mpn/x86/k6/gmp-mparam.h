/* AMD K6 gmp-mparam.h -- Compiler/machine parameter header file.

Copyright 1991, 1993, 1994, 2000, 2001, 2002, 2003, 2004, 2009
Free Software Foundation, Inc.

This file is part of the GNU MP Library.

The GNU MP Library is free software; you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation; either version 3 of the License, or (at your
option) any later version.

The GNU MP Library is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
License for more details.

You should have received a copy of the GNU Lesser General Public License
along with the GNU MP Library.  If not, see http://www.gnu.org/licenses/.  */

#define BITS_PER_MP_LIMB 32
#define BYTES_PER_MP_LIMB 4


/* 450MHz K6-2 */

/* Generated by tuneup.c, 2009-01-05, gcc 3.4 */

#define MUL_TOOM22_THRESHOLD             19
#define MUL_TOOM33_THRESHOLD             73
#define MUL_TOOM44_THRESHOLD            104

#define SQR_BASECASE_THRESHOLD            0  /* always (native) */
#define SQR_TOOM2_THRESHOLD              32
#define SQR_TOOM3_THRESHOLD             105
#define SQR_TOOM4_THRESHOLD             143

#define MULLOW_BASECASE_THRESHOLD         0  /* always */
#define MULLOW_DC_THRESHOLD              64
#define MULLOW_MUL_N_THRESHOLD          232

#define DIV_SB_PREINV_THRESHOLD           4
#define DIV_DC_THRESHOLD                 67
#define POWM_THRESHOLD                  110

#define MATRIX22_STRASSEN_THRESHOLD      21
#define HGCD_THRESHOLD                  195
#define GCD_DC_THRESHOLD                602
#define GCDEXT_DC_THRESHOLD             662
#define JACOBI_BASE_METHOD                2

#define USE_PREINV_DIVREM_1               0
#define USE_PREINV_MOD_1                  1  /* native */
#define DIVEXACT_1_THRESHOLD              0  /* always (native) */
#define MODEXACT_1_ODD_THRESHOLD          0  /* always (native) */

#define GET_STR_DC_THRESHOLD             31
#define GET_STR_PRECOMPUTE_THRESHOLD     52
#define SET_STR_DC_THRESHOLD           1127
#define SET_STR_PRECOMPUTE_THRESHOLD   1795

#define MUL_FFT_TABLE  { 336, 672, 1152, 3584, 10240, 24576, 163840, 393216, 0 }
#define MUL_FFT_MODF_THRESHOLD          352
#define MUL_FFT_THRESHOLD              7168

#define SQR_FFT_TABLE  { 272, 672, 1408, 4608, 10240, 24576, 163840, 393216, 0 }
#define SQR_FFT_MODF_THRESHOLD          336
#define SQR_FFT_THRESHOLD              3840
