/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: <your class>
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			trim.h
 * Author:			P. Bauer
 * Due Date:		March 14, 2015
 * ----------------------------------------------------------
 * Description:
 * Interface for trim
 * ----------------------------------------------------------
 */
 #ifndef __TRIM_H
 #define __TRIM_H

#define STRLEN 16

 void trim(const char * 	source, char * 	trimmed_string);
 void get_firstLetter(const char* source, int *firstLetter);
 void get_lastLetter(const char* source, int *lastLetter);

#endif
