// 345. Reverse Vowels of a String
// Easy
// Given a string s, reverse only all the vowels in the string and return it.
// The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once.

// Example 1:
// Input: s = "IceCreAm"
// Output: "AceCreIm"

// Explanation:
// The vowels in s are ['I', 'e', 'e', 'A']. On reversing the vowels, s becomes "AceCreIm".

// Example 2:
// Input: s = "leetcode"
// Output: "leotcede"

// Constraints:

// 1 <= s.length <= 3 * 105
// s consist of printable ASCII characters.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void swap( char* a , char* b ){
    char temp = *a;
    *a = *b;
    *b = temp;
}

int isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
           c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}


char* reverseVowels(char* s) {
    int left = 0 , right = strlen(s) - 1;

    char* temp = (char*)malloc(sizeof(char) * (strlen(s) + 1));
    if (!temp) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(1);
    }
    strcpy(temp, s);

    while ( left < right ){
        while( left < right && !isVowel( temp[left] ) ){
            left++;
        }

        while( left < right && !isVowel( temp[right] ) ){
            right--;
        }
        if( left < right ){
            swap( &temp[left] , &temp[right] );
            left++;
            right--;
        }
    }

    return temp;
}

int main(){
    char* s = "leetcode";
    char* result = reverseVowels(s);

    for( int i = 0 ; i < strlen(s) ; i++ ){
        printf("%c",result[i]);
        if( i == strlen(result) - 1 ){
            printf("\n");
        }
    }
    free(result);
    return 0;
}