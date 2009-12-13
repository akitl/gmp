/* gmp-mparam.h -- Compiler/machine parameter header file.

Copyright 1991, 1993, 1994, 1999, 2000, 2001, 2002, 2003, 2009 Free Software
Foundation, Inc.

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

#define GMP_LIMB_BITS 64
#define BYTES_PER_MP_LIMB 8

/* POWER5 (friggms.hpc.ntnu.no) */

/* Generated by tuneup.c, 2009-11-29, gcc 4.4 */

#define MUL_TOOM22_THRESHOLD             16
#define MUL_TOOM33_THRESHOLD             65
#define MUL_TOOM44_THRESHOLD            145

#define SQR_BASECASE_THRESHOLD           10
#define SQR_TOOM2_THRESHOLD              38
#define SQR_TOOM3_THRESHOLD              63
#define SQR_TOOM4_THRESHOLD             103

#define MUL_FFT_TABLE  { 336, 736, 1600, 2816, 7168, 20480, 49152, 196608, 786432, 0 }
#define MUL_FFT_MODF_THRESHOLD          328
#define MUL_FFT_THRESHOLD              2432

#define SQR_FFT_TABLE  { 304, 608, 1344, 2816, 7168, 20480, 49152, 196608, 786432, 0 }
#define SQR_FFT_MODF_THRESHOLD          264
#define SQR_FFT_THRESHOLD              1664

#define MULLO_BASECASE_THRESHOLD          3
#define MULLO_DC_THRESHOLD               33
#define MULLO_MUL_N_THRESHOLD          3913

#define MULMOD_BNM1_THRESHOLD            14

#define DC_DIV_QR_THRESHOLD              31
#define DC_DIVAPPR_Q_THRESHOLD          116
#define DC_BDIV_QR_THRESHOLD             51
#define DC_BDIV_Q_THRESHOLD             118
#define BINV_NEWTON_THRESHOLD           521
#define REDC_1_TO_REDC_N_THRESHOLD       55

#define MATRIX22_STRASSEN_THRESHOLD      13
#define HGCD_THRESHOLD                   86
#define GCD_DC_THRESHOLD                241
#define GCDEXT_DC_THRESHOLD             217
#define JACOBI_BASE_METHOD                1

#define MOD_1_NORM_THRESHOLD              0  /* always */
#define MOD_1_UNNORM_THRESHOLD            0  /* always */
#define MOD_1_1_THRESHOLD                27
#define MOD_1_2_THRESHOLD                28
#define MOD_1_4_THRESHOLD                30
#define USE_PREINV_DIVREM_1               0
#define USE_PREINV_MOD_1                  0
#define DIVEXACT_1_THRESHOLD              0  /* always (native) */
#define MODEXACT_1_ODD_THRESHOLD          0  /* always */

#define GET_STR_DC_THRESHOLD             14
#define GET_STR_PRECOMPUTE_THRESHOLD     24
#define SET_STR_DC_THRESHOLD            650
#define SET_STR_PRECOMPUTE_THRESHOLD   1648
