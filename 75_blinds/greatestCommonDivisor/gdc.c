#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int gcd( int a , int b ){
    while (b != 0){
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

char* gcdOfStrings( const char* a , const char* b ){
    const int len_a = strlen(a);
    const int len_b = strlen(b);
    int len_g = gcd( len_a , len_b );
    if( len_g == 0 ){
        return "";
    }
    const char* greater = ( len_a < len_b ? b : a );
    const char* lesser = ( len_a > len_b ? b : a );

    // allocate memory for the result. +1 for the end of string character
    char* res = (char*)malloc( len_g + 1 );
    // return NULL if memory allocation fails
    if( res == NULL ){
        return "Failed to allocate memory";
    }
    int i = 0;
    for( i = 0 ; i < len_g ; i++ ){
        if( a[i] == b[i] ){
            res[i] = a[i];
            res[ i + 1 ] = '\0';

            // if( i == len_g - 1 && lesser[0] != greater[i+1] ){
            //     return "";
            // }

// Logical error xa yeta
            if (i == len_g - 1) {
            if (strlen(lesser) == len_g) {
                if (lesser[0] != greater[i + 1]) {
                    // Return an empty string
                    return "";
                }
            } else {
                if (lesser[strlen(lesser) - 1] != greater[0]) {
                    // Return an empty string
                    return "";
                }
            }
        }

        }else{
            return "";
            break;
        }
    }
    return res;
}

int main(){
    const char* a = "AAAAAAAAA" ;
    const char* b = "AAACCC" ;
    
    char* result = gcdOfStrings( a , b );
    printf("The GDC is: %s \n",result);
    
    return 0;
}