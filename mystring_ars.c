#include "mystring.h"
#include <assert.h>
/*andreas paravoliashs csd3031
askhsh2
mystring_ars.c
returns the length of the string*/
size_t ms_length(const char str[]){
    size_t length=0;
    while(str[length]!='\0'){
        length++;
    }
    return length;
}
/*copy the string of src to the string dest*/
char* ms_copy(char dest[],const char src[]){
    size_t i;

    for(i=0 ;i<ms_length(src) ;i++){
        dest[i]=src[i];
    }
    return dest;
}
/*copy only n charachters of the string src to
 the string dest*/
char* ms_ncopy(char dest[],const char src[],size_t n){
    size_t i;
    assert(n>0);
    assert(n<=ms_length(src));
    for(i=0 ;i<ms_length(src) ;i++){
        if(i==n) break;
        dest[i]=src[i];
    }
    return dest;
}
/*Appends the string pointed to by src to
 the end of the string pointed to by dest*/
char* ms_concat(char dest[] ,const char src[]){
    size_t i;
    int m=ms_length(dest);
    for(i=0 ; i<ms_length(src);i++){
        dest[i+m]=src[i];
    }
    return dest;
}
/*Appends the string pointed to by src to the
 end of the string pointed to by dest
 up to n characters long.*/
char* ms_nconcat(char dest[],const char src[] , size_t n){
    size_t i ,m=ms_length(dest);
    for(i=0 ; i<ms_length(src);i++){
        if(i==n) break;
        dest[i+m]=src[i];
    }
    return dest;
}
/*Compares the string pointed to by
 str1 to the string pointed to by str2.*/
int ms_compare(const char str1[], const char str2[]){
    size_t i;
    assert(str1!=NULL);
    assert(str2!=NULL);
    if(ms_length(str1)>ms_length(str2)){
        for(i=0 ;i<ms_length(str2);i++){
            if(str1[i]!=str2[i]) return (str1[i]-str2[i]);
        }
        return 1;
    }
    else if(ms_length(str2)>ms_length(str1)){
        for(i=0 ;i<ms_length(str1);i++){
            if(str1[i]!=str2[i]) return (str1[i]-str2[i]);
        }
        return -1;
    }else{
        for(i=0 ;i<ms_length(str1);i++){
            if(str1[i]!=str2[i]) return (str1[i]-str2[i]);
        }
        return 0;
    }
}
/*Compares the first n characters of str1 and str2*/
int ms_ncompare(const char str1[], const char str2[], size_t n){
    size_t i;
    assert(n>ms_length(str1));
    assert(n>ms_length(str2));
    for(i=0 ;i<n ; i++){
        if(str1[i]!=str2[i]) return str1[i]-str2[i];
    }
    return 0;
}
/*Finds the first occurrence of the entire string needle
 witch appears in the string heystack*/
char* ms_search(const char heystack[] ,const char needle[]){
    size_t m,i,size=ms_length(needle) , k=0 , ad;
    char* a=NULL;
    if(ms_length(needle)==0) return heystack;
    for(i=0 ; i<ms_length(heystack) ; i++){
            if(heystack[i]==needle[k]){
                k++;
                if(k==size) {
                    ad=i-k+1;
                    if(ad<=0) a=heystack;
                    else a=heystack+ad;
                    return a;
                }
            }
            else k=0;
    }
    return a;
}
