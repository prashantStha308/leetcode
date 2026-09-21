// 1768. Merge Strings Alternately


// You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, starting with word1. If a string is longer than the other, append the additional letters onto the end of the merged string.

// Return the merged string.

// Example 1:
// Input: word1 = "abc", word2 = "pqr"
// Output: "apbqcr"
// Explanation: The merged string will be merged as so:
// word1:  a   b   c
// word2:    p   q   r
// merged: a p b q c r
// Example 2:

// Input: word1 = "ab", word2 = "pqrs"
// Output: "apbqrs"
// Explanation: Notice that as word2 is longer, "rs" is appended to the end.
// word1:  a   b 
// word2:    p   q   r   s
// merged: a p b q   r   s
// Example 3:

// Input: word1 = "abcd", word2 = "pq"
// Output: "apbqcd"
// Explanation: Notice that as word1 is longer, "cd" is appended to the end.
// word1:  a   b   c   d
// word2:    p   q 
// merged: a p b q c   d

// Constraints:

// 1 <= word1.length, word2.length <= 100
// word1 and word2 consist of lowercase English letters.


// COMPLETED
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* mergeString( const char* a , const char* b ){
    int i = 0 , j = 0;
    int len_a = strlen(a) , len_b = strlen(b);
    char* res = (char*)malloc(strlen(a) + strlen(b) + 1);
    int res_index = 0;

    if( res == NULL ){
        printf("Memory allocation failed");
        return NULL;
    }

    while( i < len_a || j < len_b ){
        if( i < len_a ){
            res[res_index++] = a[i++];
        }
        if( j < len_b ){
            res[res_index++] = b[j++];
        }
    }

    res[res_index] = '\0';
    return res;
}

int main(){
    const char* word1 = "arjun";
    const char* word2 = "prajapati";
    char* result = mergeString( word1 , word2 );

    if( result != NULL ){
        printf("Results: %s\n", result);
        free(result);
    }else{
        printf("The returned value was NULL\n");
    }

    return 0;
}

// COMPLETED
