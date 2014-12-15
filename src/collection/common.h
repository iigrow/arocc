/*
 * =====================================================================================
 *
 *       Filename:  common.h
 *
 *    Description:  common define
 *
 *        Version:  1.0
 *        Created:  12/9/2014 21:58:38
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  xuejp (xuejp), xuejp@outlook.com
 *        Company:  simplelive
 *
 * =====================================================================================
 */
#include<stdio.h>
#include<stdlib.h>
#ifndef true 
#define true 1
#endif
#ifndef false
#define false 0
#endif
typedef int bool;
#define FatalError(str) fprintf(stderr,"%s\n",str),exit(1)
