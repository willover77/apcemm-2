/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
/*                                                                  */
/* Sparse Hessian Data Structures File                              */
/*                                                                  */
/* Generated by KPP-2.2.3 symbolic chemistry Kinetics PreProcessor  */
/*       (http://www.cs.vt.edu/~asandu/Software/KPP)                */
/* KPP is distributed under GPL, the general public licence         */
/*       (http://www.gnu.org/copyleft/gpl.html)                     */
/* (C) 1995-1997, V. Damian & A. Sandu, CGRER, Univ. Iowa           */
/* (C) 1997-2005, A. Sandu, Michigan Tech, Virginia Tech            */
/*     With important contributions from:                           */
/*        M. Damian, Villanova University, USA                      */
/*        R. Sander, Max-Planck Institute for Chemistry, Mainz, Germany */
/*                                                                  */
/* File                 : KPP_HessianSP.c                           */
/* Time                 : Tue Sep  4 17:12:00 2018                  */
/* Working directory    : /home/fritzt/Documents/kpp-2.2.3/Research/UCX_Forw_C_2 */
/* Equation file        : KPP.kpp                                   */
/* Output root filename : KPP                                       */
/*                                                                  */
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "KPP_Parameters.h"
#include "KPP_Global.h"
#include "KPP_Sparse.h"



/* Hessian Sparse Data                                              */
/*                                                                  */
 /* Index i of Hessian element d^2 f_i/dv_j.dv_k */

  int  IHESS_I[] = {
       0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
       0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  2,  3,
       3,  4,  5,  5,  6,  6,  7,  8,  8,  9,  9, 10,
      11, 11, 12, 12, 13, 13, 14, 14, 15, 15, 16, 16,
      17, 17, 17, 18, 18, 19, 20, 20, 21, 21, 22, 22,
      23, 23, 23, 23, 23, 24, 24, 24, 25, 25, 25, 25,
      25, 26, 26, 27, 27, 28, 28, 28, 28, 28, 28, 28,
      28, 29, 29, 29, 30, 30, 30, 30, 31, 31, 31, 31,
      32, 32, 32, 32, 33, 33, 33, 34, 34, 35, 35, 36,
      36, 36, 37, 37, 38, 38, 38, 38, 39, 39, 39, 39,
      40, 40, 40, 41, 41, 41, 42, 42, 42, 42, 43, 43,
      43, 43, 44, 44, 44, 45, 45, 45, 46, 46, 46, 46,
      47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47,
      47, 47, 48, 48, 48, 49, 49, 49, 49, 50, 50, 50,
      50, 51, 51, 51, 51, 51, 52, 52, 52, 52, 53, 53,
      53, 53, 53, 53, 54, 54, 54, 54, 55, 55, 55, 55,
      56, 56, 56, 56, 56, 56, 57, 57, 57, 57, 57, 57,
      57, 58, 58, 58, 58, 58, 59, 59, 59, 59, 59, 60,
      60, 60, 60, 60, 60, 60, 60, 60, 60, 61, 61, 61,
      61, 61, 61, 61, 61, 61, 62, 62, 62, 62, 62, 62,
      62, 62, 62, 62, 62, 62, 62, 62, 62, 63, 63, 63,
      63, 63, 63, 64, 64, 64, 64, 65, 65, 65, 65, 65,
      65, 66, 66, 66, 66, 66, 66, 66, 66, 66, 67, 67,
      67, 67, 67, 67, 67, 67, 67, 68, 68, 68, 68, 68,
      68, 68, 69, 69, 69, 69, 69, 69, 69, 69, 70, 70,
      70, 70, 70, 70, 70, 71, 71, 71, 71, 71, 71, 71,
      72, 72, 72, 72, 72, 72, 73, 73, 73, 73, 73, 73,
      74, 74, 74, 74, 74, 74, 75, 75, 75, 75, 75, 75,
      76, 76, 76, 76, 76, 77, 77, 77, 77, 77, 77, 78,
      78, 78, 78, 78, 78, 78, 78, 78, 78, 78, 78, 79,
      79, 79, 79, 79, 79, 80, 80, 80, 80, 80, 80, 80,
      80, 80, 80, 80, 80, 80, 80, 80, 80, 81, 81, 81,
      81, 81, 81, 82, 82, 82, 82, 82, 82, 82, 82, 83,
      83, 83, 83, 83, 83, 84, 84, 84, 84, 84, 84, 84,
      84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84, 84,
      84, 84, 84, 84, 84, 85, 85, 85, 85, 85, 85, 85,
      86, 86, 86, 86, 86, 86, 87, 87, 87, 87, 87, 87,
      88, 88, 88, 88, 88, 88, 88, 88, 88, 88, 89, 89,
      89, 89, 89, 89, 89, 90, 90, 90, 90, 90, 90, 90,
      90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90, 90,
      90, 90, 90, 90, 90, 90, 91, 91, 91, 91, 91, 91,
      91, 91, 92, 92, 92, 92, 92, 92, 92, 92, 93, 93,
      93, 93, 93, 93, 94, 94, 94, 94, 94, 94, 94, 95,
      95, 95, 95, 95, 95, 95, 95, 95, 95, 95, 95, 95,
      95, 95, 95, 95, 95, 95, 95, 95, 95, 95, 95, 95,
      95, 95, 95, 95, 95, 95, 96, 96, 96, 96, 96, 96,
      96, 96, 96, 96, 96, 96, 97, 97, 97, 97, 97, 97,
      97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97,
      97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 97,
      97, 97, 97, 97, 97, 97, 97, 97, 97, 97, 98, 98,
      98, 98, 99, 99, 99, 99,100,100,100,100,100,100,
     100,100,100,100,101,101,101,101,101,101,101,101,
     101,101,101,101,101,101,101,102,102,102,102,102,
     102,102,102,102,102,102,103,103,103,103,103,103,
     103,103,103,103,103,103,103,103,103,103,103,103,
     103,103,103,103,103,103,103,104,104,104,104,104,
     104,104,104,104,104,104,104,104,104,104,104,104,
     104,104,104,104,104,105,105,105,105,105,105,105,
     105,105,105,105,105,105,105,105,106,106,106,106,
     106,106,106,106,106,106,106,106,106,106,106,106,
     106,106,106,107,107,107,107,107,107,107,107,108,
     108,108,108,108,108,108,108,108,108,108,108,108,
     108,108,108,108,108,109,109,109,109,109,109,109,
     109,109,109,109,109,109,109,109,109,109,109,109,
     109,109,109,109,109,109,109,109,109,109,109,109,
     110,110,110,110,110,110,110,110,110,110,110,110,
     110,110,110,110,110,110,110,110,110,110,110,110,
     110,110,110,110,110,110,110,110,110,110,110,110,
     110,110,110,110,110,110,110,110,110,111,111,111,
     111,111,111,111,111,111,111,111,111,111,111,111,
     111,111,111,111,111,111,111,111,111,111,111,111,
     111,111,111,111,111,111,111,111,111,111,111,111,
     111,111,111,111,111,111,111,111,111,111,111,111,
     111,111,111,111,111,111,111,111,111,111,111,111,
     111,111,111,111,111,111,111,111,111,111,111,111,
     111,111,111,111,111,111,111,111,112,112,112,112,
     112,112,112,112,112,112,112,112,112,112,112,112,
     112,112,112,112,112,112,112,112,112,112,112,112,
     112,112,112,112,112,112,113,113,113,113,113,113,
     113,113,113,113,113,113,113,113,113,113,113,113,
     113,114,114,114,114,114,114,114,114,114,114,114,
     114,114,114,114,114,114,114,114,114,114,114,114,
     114,114,114,114,114,114,114,114,114,114,114,114,
     114,114,114,114,114,114,114,114,114,114,114,114,
     115,115,115,115,115,115,115,115,115,115,115,115,
     115,115,115,115,115,115,115,115,115,115,115,115,
     115,115,115,115,115,115,115,115,115,115,115,115,
     115,115,115,115,116,116,116,116,116,116,116,116,
     116,116,116,116,116,116,116,117,117,117,117,117,
     117,117,117,117,117,117,117,117,117,117,117,117,
     117,117,117,117,118,118,118,118,118,118,118,119,
     119,119,119,119,119,119,119,119,119,119,119,119,
     119,119,119,119,119,119,119,119,119,119,119,120,
     120,120,120,120,120,120,120,120,120,120,120,120,
     120,120,120,120,120,120,120,120,120,120,120,120,
     120,120,120,120,120,120,120,120,120,120,120,120,
     120,120,120,120,120,120,120,120,120,120,120,120,
     120,120,120,120,120,120,120,120,120,120,120,120,
     120,120,120,120,120,120,120,120,120,120,120,120,
     120,120,120,120,120,120,120,120,120,120,120,120,
     120,120,120,120,120,120,120,120,120,120,120,120,
     120,120,120,120,120,120,120,120,120,120,120,120,
     120,120,120,120,120,120,120,120,120,120,120,120,
     120,120,120,120,120,120,120,121,121,121,121,121,
     121,121,121,121,121,121,121,121,121,121,121,121,
     121,121,121,121,121,121,121,121,121,121,121,121,
     121,121,121,121,121,121,121,121,121,121,121,121,
     121,121,121,121,121,121,121,121,121,121,121,121,
     121,121,121,121,121,121,121,121,121,121,121,121,
     121,121,121,121,121,121,121,121,121,121,121,121,
     121,121,121,121,121,121,121,121,121,121,121,121,
     121,121,121,121,122,122,122,122,122,122,122,122,
     122,122,122,122,122,122,122,122,122,122,122,122,
     122,122,122,122,122,122,122,122,122,122,122,122,
     122,122,122,122,122,122,122,122,122,122,122,122,
     122,122,122,122,122,122,122,122,122,122,122,122,
     122,122,122,122,122,122,122,122,122,122,122,122,
     122,122,122,122,122,122,122,122,122,122,122,122,
     122,122,122,122,122,122,122,122,122,122,122,122,
     122,122,122,122,122,122,122,122,122,122,122,122,
     122,122,122,122,122,122,122,122,122,122,122,123,
     123,123,123,123,123,123,123,123,123,123,124,124,
     124,124,124,124,124,124,124,124,124,124,125,125,
     125,125,125,125,125,125,125,125,125,125,125,125,
     125,125,125,125,125,125,125,125,125,125,125,125,
     125,125,125,125,125,125,125,125,125,125,125,125,
     125,125,125,125,125,125,125,125,126,126,126,126,
     126,126,126,126,126,126,126,126,126,126,126,126,
     126,126,126,126,126,126,126,126,126,126,126,126,
     126,126,126,126,126,126,126,126,126,126,126,126,
     126,126,126,126,126,126,126,126,126,126,126,126,
     126,126,126,126,126,126,126 }; 

 /* Index j of Hessian element d^2 f_i/dv_j.dv_k */

  int  IHESS_J[] = {
      30, 39, 40, 45, 45, 46, 46, 48, 48, 63, 63, 63,
      63, 63, 76, 84, 86, 92, 95,110,122, 82,113,  3,
      34, 46,  5,  6,  6,  6,110,  8,  8,  9,110,121,
      11,105, 12, 80, 13,114, 14, 14, 15, 60, 16, 66,
      17,102,105, 18, 41, 19, 20,120, 21, 92, 22,120,
      11, 23,102,105,105, 24, 77, 82, 54, 59, 85, 88,
     102, 26, 74, 27, 79, 56, 65, 69, 70, 72, 73, 75,
     107, 29, 54,102, 30, 58, 99, 99, 44, 71, 98, 98,
      32, 48, 49,100, 33, 33, 33, 34, 86, 35, 71, 36,
      81, 89, 37, 83, 37, 38, 83, 83, 39, 39, 83, 83,
      40, 73, 93, 41, 41,115, 42, 42, 42, 91, 43, 76,
      98, 99, 44, 44, 86,  3, 45, 45, 46, 46, 46, 68,
      47, 60, 63, 66, 71, 74, 79, 81, 83, 86, 86, 87,
      93,100, 39, 48, 48, 49, 49, 86, 86, 50, 50, 77,
      92, 51, 51, 51, 51, 91, 42, 51, 52, 94, 53, 53,
      64,117,118,118, 54, 54, 54,102, 19, 55, 55, 55,
      19, 56, 56, 56, 56, 56, 23, 57, 57, 85, 85, 88,
     105, 58, 58, 86, 94, 94, 29, 54, 59, 59,102, 14,
      14, 15, 60, 60, 60, 60,100,100,100, 27, 58, 61,
      76, 76, 76, 76, 99, 99, 42, 42, 45, 45, 49, 49,
      51, 51, 51, 62, 62, 83, 83, 84, 91, 21, 63, 63,
      63, 63, 63, 55, 64, 64, 64, 65, 65, 65, 65, 65,
      96, 14, 16, 66, 66, 66, 66,100,100,100, 16, 66,
      66, 66, 67, 67,100,100,100, 44, 68, 93, 98, 98,
      99, 99, 19, 55, 69, 69, 69, 69,106,108, 70, 70,
      70, 70, 70, 96,106, 19, 35, 71, 71, 71, 71,108,
      72, 72, 72, 72, 72,108, 19, 73, 73, 73, 73, 73,
      26, 55, 74, 74, 74, 74, 55, 75, 75, 75, 75, 75,
      76, 76, 76, 76,106, 77, 77, 77, 77, 91, 91, 56,
      65, 69, 70, 72, 73, 75, 78, 78, 78,120,122, 27,
      55, 79, 79, 79, 79, 12, 33, 33, 33, 80, 80, 80,
      80, 80, 82, 82, 82, 82,100,100,100, 81, 81, 81,
      81,104,104, 24, 82, 82, 82, 82, 82,103,103, 37,
      83, 83, 83, 83, 96, 45, 45, 49, 49, 58, 65, 65,
      65, 65, 65, 71, 71, 71, 71, 83, 83, 83, 83, 84,
      96, 98, 98, 99, 99, 85, 85, 85, 85, 85, 85,105,
      34, 86, 86, 86, 86, 86, 43, 87, 87, 87, 87,101,
      11, 17, 18, 57, 85, 85, 88, 88, 88,105, 36, 67,
      67, 89, 89, 89, 89,  8, 33, 41, 41, 48, 49, 54,
      54, 62, 63, 83, 85, 85, 85, 90, 91, 97, 98, 99,
     103,104,106,109,111,121, 91, 91, 91, 94, 94, 94,
      94, 94, 21, 92, 92, 92, 92, 92,106,106, 40, 93,
      93, 93, 93,106, 52, 94, 94, 94, 94, 94, 94, 26,
      38, 40, 45, 45, 46, 46, 49, 49, 50, 58, 63, 63,
      63, 63, 63, 65, 74, 74, 83, 83, 83, 89, 93, 93,
      93, 95, 98, 98, 99, 99, 34, 86, 86, 86, 86, 94,
      94, 94, 94, 94, 96, 96, 36, 45, 45, 46, 46, 49,
      49, 61, 70, 70, 70, 70, 70, 71, 71, 71, 71, 72,
      72, 72, 72, 72, 76, 76, 76, 76, 83, 83, 83, 83,
      89, 93, 93, 93, 95, 96, 97, 97,106,108, 43, 44,
      98, 98, 43, 58, 99, 99,  8,  8, 32, 87, 87, 87,
     100,100,100,100, 42, 42, 51, 51, 51, 52, 76, 77,
      77, 81, 87, 89, 91,100,101, 59,102,102,102,102,
     102,102,102,113,113,118, 15, 32, 47, 48, 48, 60,
      60, 60, 71, 74, 74, 76, 79, 79, 83, 83, 87, 87,
      87, 94,100,100,100,103,103, 35, 38, 39, 52, 63,
      71, 71, 71, 81, 81, 83, 83, 86, 89, 93, 99, 99,
     100,100,100,104,104, 23, 57, 85, 88,102,105,105,
     105,105,105,105,105,116,116,118, 19, 73, 73, 73,
      73, 73, 86, 86, 86, 86, 86, 94, 94, 94, 94, 94,
     106,106,106, 56, 65, 69, 70, 72, 73, 75,107, 19,
      56, 56, 56, 56, 56, 86, 86, 86, 86, 86, 94, 94,
      94, 94, 94,108,108, 12, 55, 74, 74, 74, 75, 75,
      75, 75, 75, 79, 79, 79, 80, 80, 80, 80, 81, 81,
      81, 81, 87, 87, 87,100,100,100,108,109,109,109,
       9, 19, 50, 60, 63, 66, 71, 71, 71, 71, 72, 74,
      76, 79, 80, 81, 81, 81, 81, 82, 83, 86, 87, 89,
      89, 89, 89, 92, 92, 93, 94, 96, 97, 97,100,106,
     108,109,109,109,110,110,110,110,110, 19, 22, 30,
      42, 44, 45, 45, 46, 46, 50, 51, 55, 60, 63, 64,
      66, 69, 69, 69, 69, 71, 71, 71, 71, 74, 74, 74,
      76, 76, 76, 76, 79, 79, 79, 80, 81, 82, 83, 84,
      86, 86, 86, 86, 86, 87, 87, 87, 89, 89, 89, 89,
      91, 92, 92, 92, 92, 93, 93, 93, 94, 94, 94, 94,
      94, 96, 98, 98, 99, 99,100,105,106,108,109,110,
     111,111,111,111,111,114,119,126, 13, 20, 22, 33,
      36, 41, 53, 54, 56, 59, 64, 65, 67, 69, 70, 72,
      73, 75, 78, 85, 88, 88, 88, 90,101,103,104,109,
     111,112,120,122,122,122, 14, 29, 33, 54, 67,102,
     102,102,102,102,109,111,113,113,113,113,117,118,
     122,  5,  6, 42, 45, 46, 48, 49, 51, 56, 60, 63,
      65, 66, 69, 70, 71, 72, 73, 74, 75, 76, 77, 79,
      80, 81, 82, 83, 86, 87, 89, 92, 93, 94, 98, 99,
     100,102,105,110,114,114,114,114,114,114,115,117,
       8, 33, 46, 46, 50, 51, 54, 55, 56, 62, 65, 69,
      70, 72, 73, 75, 77, 85, 85, 85, 90, 91, 94, 97,
      99, 99,103,104,106,109,111,113,114,115,115,115,
     115,115,117,119, 23, 57, 57, 64, 78, 85,105,105,
     105,105,111,116,116,118,122,  6,  6, 53, 57, 59,
      78, 85,102,105,111,114,115,117,117,117,117,117,
     118,118,118,122,  5, 57, 64,112,118,118,118, 19,
      39, 44, 50, 53, 55, 58, 77, 82, 91, 92, 96,106,
     108,110,113,114,116,117,118,119,119,119,119, 19,
      38, 39, 42, 42, 42, 45, 45, 46, 47, 48, 48, 49,
      49, 51, 51, 53, 55, 60, 60, 60, 60, 62, 62, 63,
      63, 64, 66, 66, 66, 66, 71, 71, 71, 71, 74, 74,
      74, 74, 76, 76, 76, 77, 77, 77, 78, 78, 78, 79,
      79, 80, 80, 80, 80, 80, 81, 81, 82, 82, 83, 83,
      83, 83, 84, 86, 86, 86, 86, 86, 87, 87, 89, 89,
      91, 92, 92, 93, 93, 93, 93, 94, 94, 94, 94, 94,
      94, 95, 96, 98, 98, 99, 99,100,100,100,100,102,
     102,105,105,105,106,107,108,109,110,110,111,111,
     111,111,111,113,114,114,115,115,116,117,119,119,
     119,120,120,120,120,122,126,  6, 13, 18, 20, 30,
      45, 46, 46, 46, 48, 49, 50, 51, 51, 51, 52, 56,
      56, 60, 61, 63, 65, 65, 66, 69, 69, 70, 70, 71,
      72, 72, 73, 73, 74, 75, 75, 76, 76, 76, 76, 77,
      77, 77, 79, 79, 79, 80, 81, 82, 82, 83, 86, 87,
      87, 87, 89, 91, 92, 92, 93, 94, 94, 94, 94, 94,
      98, 98, 99, 99,100,102,102,105,105,110,110,113,
     113,114,114,114,114,114,115,115,115,115,115,117,
     119,120,121,121,  3,  8,  9, 11, 12, 13, 14, 15,
      16, 17, 18, 19, 20, 21, 22, 24, 26, 27, 29, 30,
      32, 33, 34, 35, 36, 37, 38, 39, 39, 40, 43, 44,
      44, 45, 45, 46, 47, 48, 49, 50, 52, 53, 53, 55,
      55, 57, 58, 58, 59, 61, 62, 63, 63, 63, 63, 63,
      64, 64, 67, 68, 71, 76, 76, 78, 78, 81, 82, 83,
      84, 85, 86, 88, 89, 90, 91, 92, 95, 96, 96, 97,
      98, 99,101,102,103,104,105,106,106,107,108,108,
     109,110,111,111,112,114,114,115,115,116,117,117,
     117,118,118,119,119,120,121,122,122,122,122, 14,
      33, 67, 85, 88,109,111,113,117,118,122, 41, 54,
      59, 64, 78, 85, 88,105,111,116,118,122, 14, 19,
      33, 38, 45, 45, 50, 55, 56, 62, 62, 65, 67, 70,
      72, 73, 75, 76, 76, 76, 76, 77, 77, 83, 83, 83,
      84, 92, 92, 93, 93, 93, 95, 96, 97, 97,106,108,
     109,109,111,111,111,111,111,122, 19, 22, 42, 51,
      55, 60, 60, 63, 63, 64, 64, 64, 66, 66, 71, 71,
      72, 74, 74, 76, 76, 79, 79, 80, 80, 81, 81, 82,
      82, 83, 83, 86, 86, 87, 87, 89, 89, 92, 92, 92,
      92, 93, 93, 94, 94, 95,100,100,100,105,110,110,
     110,110,114,119,120,121,126 }; 

 /* Index k of Hessian element d^2 f_i/dv_j.dv_k */

  int  IHESS_K[] = {
     122,119,122,114,120,114,120,114,120, 63,110,114,
     120,126,110,122,110,114,122,114,125,121,121,122,
     122,121,118,121,114,121,121,115,122,122,120,126,
     122,105,122,120,122,122,113,122,122,120,122,120,
     122,105,105,122,124,119,122,121,122,120,122,126,
     122,116,105,105,126,122,120,120,124,124,123,123,
     105,122,120,122,120,107,107,107,107,107,107,107,
     122,122,113,102,122,119,114,120,119,114,114,120,
     122,120,120,120,113,115,122,122,120,122,120,122,
     120,120,122,120,122,122,110,114,119,122,110,114,
     122,112,120,112,124,121,114,120,126,122,122,120,
     120,120,119,122,114,122,114,120,114,120,121,122,
     122,126,126,126,126,126,126,126,126, 86,126,126,
     126,126,122,114,120,114,120,110,114,119,122,121,
     121,114,115,120,126,115,120,120,122,120,119,120,
     118,122,123,124,112,113,124,121,119,115,119,122,
     119,107,112,114,121,125,116,118,122,116,124,124,
     105,119,122,114, 94,126,122,112,117,124,120,113,
     122,122,110,114,120,126,110,114,126,122,119,122,
     110,114,120,126,114,120,114,126,114,120,114,120,
     114,115,126,115,122,110,114,122,119,122, 63,110,
     114,120,126,119,116,118,122,107,112,114,121,125,
     119,122,122,110,114,120,126,110,114,126,122,110,
     114,126,113,122,110,114,126,119,122,114,114,120,
     114,120,119,119,107,112,114,121,119,119,107,112,
     114,121,125,119,119,119,122,110,114,120,126,122,
     107,112,114,121,125,119,119,107,112,114,121,125,
     122,122,110,114,120,126,119,107,112,114,121,125,
     110,114,120,126,115,114,115,120,121,115,122,112,
     112,112,112,112,112,112,116,117,122,120,122,122,
     115,110,114,120,126,122,113,115,122, 80,110,114,
     120,126,110,114,120,126,110,114,126,110,114,120,
     126,115,122,122,110,114,120,121,126,115,122,122,
     110,114,120,126,122,114,120,114,120,119,107,112,
     114,121,125,110,114,120,126,110,114,120,126,122,
     119,114,120,114,120,112,116,117,122,123,124,121,
     122, 86,110,114,120,126,122,110,114,120,126,122,
     122,122,122,122,112,122,122,123,124,120,122,113,
     122,110,114,120,126,115,115,112,124,114,114,112,
     124,115,114,114,112,123,124,122,115,115,114,114,
     115,115,115,115,115,122,115,119,122, 94,110,114,
     115,126,122,110,114,120,121,126,115,122,122,110,
     114,120,126,122,122, 94,110,114,115,120,126,122,
     122,122,114,120,114,120,114,120,122,119, 63,110,
     114,120,126,112,110,126,110,114,126,126,110,114,
     126,122,114,120,114,120,122, 86,110,114,126, 94,
     110,114,115,126,119,122,122,114,120,114,120,114,
     120,122,107,112,114,121,125,110,114,120,126,107,
     112,114,121,125,110,114,120,126,110,114,120,126,
     126,110,114,126,122,119,115,122,119,119,122,122,
     114,120,122,122,114,120,115,122,122,110,114,126,
     110,114,120,126,114,126,114,115,126,122,126,114,
     115,114,120,114,119,114,122,117,102,105,114,117,
     120,121,122,115,119,123,122,122,122,114,120,110,
     114,126,120,110,126,110,110,126,110,114,110,114,
     126,110,110,114,126,115,122,122,122,119,122,110,
     110,120,126,110,126,110,126,110,110,110,114,120,
     110,114,126,115,122,116,118,117,122,105,105,114,
     117,120,121,122,126,119,120,124,119,107,112,114,
     121,125, 86,110,114,120,126, 94,110,114,115,126,
     115,119,122,107,107,107,107,107,107,107,122,119,
     107,112,114,121,125, 86,110,114,120,126, 94,110,
     114,115,126,119,122,122,119,110,114,126,107,112,
     114,121,125,110,114,126, 80,110,114,126,110,114,
     120,126,110,114,126,110,114,126,119,113,115,122,
     122,119,119,110,110,110,110,114,120,126,112,110,
     110,110,110,110,114,120,126,110,110,110,110,110,
     114,120,126,114,126,110,110,119,115,122,110,119,
     119,113,115,122,110,114,120,121,126,119,122,122,
     126,119,114,120,114,120,119,126,119,126,126,118,
     126,107,112,114,121,110,114,120,126,110,114,126,
     110,114,120,126,110,114,126,126,126,126,126,122,
      86,110,114,120,126,110,114,126,110,114,120,126,
     119,110,114,120,126,110,114,126, 94,110,114,115,
     126,119,114,120,114,120,126,126,119,119,122,126,
     113,115,116,117,122,126,126,126,122,122,122,122,
     122,112,120,112,112,124,122,112,122,112,112,112,
     112,112,122,112,122,123,124,122,122,122,122,122,
     122,118,122,122,123,124,113,122,113,113,113,102,
     105,114,117,122,113,113,115,119,120,121,123,123,
     123,118,114,114,114,114,114,114,114,114,114,114,
     114,114,114,114,114,114,114,114,114,114,114,114,
     114,114,114,114,114,114,114,114,114,114,114,114,
     114,114,114,114,115,117,119,120,122,126,121,121,
     115,115,114,120,119,115,113,115,121,115,121,121,
     121,121,121,121,115,116,117,122,122,115,115,115,
     114,120,115,115,115,115,115,115,115,115,117,120,
     121,122,121,121,116,118,122,116,116,116,105,114,
     117,122,116,119,120,124,124,114,121,120,118,117,
     117,117,117,117,117,117,117,119,120,121,122,123,
     119,123,124,122,118,118,118,118,119,123,124,119,
     119,119,119,119,119,119,120,120,119,120,119,119,
     119,120,119,119,119,119,119,120,121,122,126,119,
     122,119,114,120,126,114,120,120,122,114,120,114,
     120,120,126,120,119,110,114,120,126,115,122,120,
     126,118,110,114,120,126,110,114,120,126,110,114,
     120,126,110,120,126,114,115,120,116,117,122,120,
     126, 80,110,114,120,126,120,126,120,126,110,114,
     120,126,122, 86,110,114,120,126,120,126,120,126,
     119,120,126,110,114,120,126, 94,110,114,115,120,
     126,122,119,114,120,114,120,110,114,120,126,120,
     122,120,122,126,119,122,119,122,120,126,113,115,
     116,117,122,120,120,126,120,122,120,120,120,122,
     126,120,121,122,126,125,126,121,122,122,122,122,
     114,114,120,121,114,114,122,114,115,126,122,114,
     121,114,122,114,114,121,114,114,121,114,121,114,
     114,121,114,121,114,114,121,110,114,120,126,114,
     115,121,110,114,126,114,114,114,121,114,114,110,
     114,126,114,119,114,121,114, 94,110,114,115,126,
     114,120,114,120,114,114,121,114,121,114,121,115,
     121,115,117,119,120,126,115,117,120,121,122,121,
     121,121,122,126,122,122,122,122,122,122,122,122,
     122,122,122,119,122,122,122,122,122,122,122,122,
     122,122,122,122,122,122,122,119,122,122,122,119,
     122,114,120,120,122,120,120,122,122,119,120,119,
     122,122,119,122,117,122,122, 63,110,114,120,126,
     118,122,122,122,120,114,120,117,122,120,120,120,
     122,122,120,122,120,122,122,120,122,119,122,122,
     120,120,122,122,122,122,122,119,122,122,119,122,
     122,120,117,122,118,120,122,120,122,120,120,122,
     123,123,124,120,122,122,122,122,123,124,125,113,
     113,113,123,123,113,113,120,123,123,123,124,124,
     124,116,116,124,124,122,116,120,124,124,113,119,
     113,122,114,120,122,119,125,115,122,125,113,125,
     125,125,125,110,114,120,126,114,115,110,114,126,
     122,114,120,110,114,126,122,119,115,122,119,119,
     113,122,113,115,116,117,122,125,119,122,126,126,
     119,110,126,110,126,116,118,122,110,126,110,126,
     112,110,126,110,126,110,126,110,126,110,126,110,
     126,110,126,110,126,110,126,110,126,110,114,120,
     126,110,126,110,126,122,110,114,126,126,110,114,
     120,126,126,126,126,126,126 }; 


