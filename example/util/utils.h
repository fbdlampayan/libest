/*------------------------------------------------------------------
 * utils.h - Generic functions used by all the example apps
 *
 * August, 2013
 *
 * Copyright (c) 2013 by cisco Systems, Inc.
 * All rights reserved.
 *------------------------------------------------------------------
 */

#ifndef HEADER_UTILS_H
#define HEADER_UTILS_H

#define MAX_UID_LEN 255
#define MAX_PWD_LEN 255

int read_binary_file(char *filename, unsigned char **contents);
void write_binary_file(char *filename, unsigned char *contents, int len); 
void dumpbin(unsigned char *buf, int len);
#endif

