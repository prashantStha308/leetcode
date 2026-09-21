// 151. Reverse Words in a String
// Medium
// Given an input string s, reverse the order of the words.

// A word is defined as a sequence of non-space characters. The words in s will be separated by at least one space.

// Return a string of the words in reverse order concatenated by a single space.
// Note that s may contain leading or trailing spaces or multiple spaces between two words. The returned string should only have a single space separating the words. Do not include any extra spaces.

// Example 1:
// Input: s = "the sky is blue"
// Output: "blue is sky the"
// Example 2:

// Input: s = "  hello world  "
// Output: "world hello"
// Explanation: Your reversed string should not contain leading or trailing spaces.
// Example 3:

// Input: s = "a good   example"
// Output: "example good a"
// Explanation: You need to reduce multiple spaces between two words to a single space in the reversed string.
 
// Constraints:
// 1 <= s.length <= 104
// s contains English letters (upper-case and lower-case), digits, and spaces ' '.
// There is at least one word in s.
 
// Follow-up: If the string data type is mutable in your language, can you solve it in-place with O(1) extra space?

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

// HOW DO I EVEN START????
char* reverseWords(char* s) {
    char* res = (char*)malloc( sizeof(char) * strlen(s) + 1 );
    if( !res ){
        fprintf( stderr , "Memory Allocation Failed" );
        exit(1);
    }
    // WHATTT NOWW? *cries*
    char strArr[strlen(s)];
    for( int i = 0 ; i < strlen(s) ; i++ ){
        if( s[i] == " " ){
            if( s[i+1] == " " ){
                continue;
            }else{
                // strArr.push()... FUICKKK, STACK AAFAI BANAUNU PARXAA
            }
        }
    }
}

int main(){
    char* s = "the sky is blue";
    char res = reverseWords(s);
    if( res != NULL ){
        printf( "%s\n", res );
        free(res);
    }else{
        fprintf(stderr , "returned value was NULL, some error occured in the function");
        exit(1);
    }

    return 0;
}