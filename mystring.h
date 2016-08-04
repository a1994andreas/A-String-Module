#include <stddef.h>
//andreas paravoliashs csd3031
//askhsh2
//mystring_ars.c

//returns the length of the string
extern size_t ms_length(const char *str);
//copy the string of src to the string dest
extern char* ms_copy(char *dest , const char *src);
//copy only n charachters of the string src to
//the string dest
extern char* ms_ncopy(char *dest, const char *src , size_t n);
//Appends the string pointed to by src to
// the end of the string pointed to by dest
extern char* ms_concat(char *dest ,const char *src );
//Appends the string pointed to by src to the
//end of the string pointed to by dest
//up to n characters long.
extern char* ms_nconcat(char *dest,const char *src , size_t n);
//Compares the string pointed to by
// str1 to the string pointed to by str2.
extern int ms_compare(const char *str1, const char *str2);
//Compares the first n characters of str1 and str2
extern int ms_ncompare(const char *str1, const char *str2, size_t n);
//Finds the first occurrence of the entire string needle
//witch appears in the string heystack
extern char* ms_search(const char*heystack ,const char* needle);

