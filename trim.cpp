/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: <your class>
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			trim.cpp
 * Author:			P. Bauer
 * Due Date:		March 14, 2015
 * ----------------------------------------------------------
 * Description:
 * Test functions for trim.h
 * ----------------------------------------------------------
 */

#include <string.h>
#include "trim.h"


 void trim(const char * 	source, char * 	trimmed_string)
 {
   int count = 0;
   int firstLetter = 0;
   int lastLetter = strlen(source) -1;

   get_firstLetter(source, &firstLetter);
   get_lastLetter(source, &lastLetter);

   if (strlen(source) > 0 ) {
     for (int i = firstLetter; i <= lastLetter; i++) {
       trimmed_string[count] = source[i];
       count ++;
     }
   }
   else
   {
     strcpy(trimmed_string, "");
   }
 }

 void get_firstLetter(const char* source, int *firstLetter)
 {
   while (source[*firstLetter] == ' ') {
     *firstLetter = *firstLetter+1;
   }
 }

 void get_lastLetter(const char* source, int *lastLetter)
 {
   while (source[*lastLetter] == ' ') {
     *lastLetter = *lastLetter-1;
   }
 }
