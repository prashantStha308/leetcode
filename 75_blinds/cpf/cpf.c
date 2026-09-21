// 605. Can Place Flowers
// Easy
// You have a long flowerbed in which some of the plots are planted, and some are not. However, flowers cannot be planted in adjacent plots.

// Given an integer array flowerbed containing 0's and 1's, where 0 means empty and 1 means not empty, and an integer n, return true if n new flowers can be planted in the flowerbed without violating the no-adjacent-flowers rule and false otherwise.

// Example 1:

// Input: flowerbed = [1,0,0,0,1], n = 1
// Output: true
// Example 2:

// Input: flowerbed = [1,0,0,0,1], n = 2
// Output: false
 

// Constraints:

// 1 <= flowerbed.length <= 2 * 104
// flowerbed[i] is 0 or 1.
// There are no two adjacent flowers in flowerbed.
// 0 <= n <= flowerbed.length

// flower bed bed bed flower
// if flower bed flower bed flower = true
// if flower flower flower bed flower = false
// basically, 1 ko aagadi ra pachdi 0 nai hunu paryo.
// just check if odd numbered element === to flowerbed[0] and even numbered elements === to flowerbed[1]

#include <stdio.h>
#include <stdbool.h>

bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) {
    if( n == 0 ){
        return true;
    }
    int count = 0 , i ;
    for( i = 0 ; i < flowerbedSize ; i++ ){
        // if current vase doesn't have a flower AND if either it's the first element OR if the previous element is empty AND if it's the last element OR the next item doesn't have flower, then add flower to current position and increment the count
        // 
        if( flowerbed[i] == 0 
            && ( i == 0 || flowerbed[ i - 1 ] == 0 )
            && ( i == flowerbedSize - 1 || flowerbed[ i + 1 ] == 0 )
        ){
            flowerbed[i]  = 1;
            count ++;
            // if enough are planted, return true
            if( count >= n ){
                return true;
            }
        }
    }
    // if enough are not planted, return false
    return false;
}

int main() {
    int flowerbed[] = { 0 , 0, 0, 0, 0, 1};
    int n = 2;
    int flowerbedSize = sizeof(flowerbed) / sizeof(flowerbed[0]);
    
    bool result = canPlaceFlowers(flowerbed, flowerbedSize, n);
    printf("%d\n", result);  // Output: 1 (true)
    
    return 0;
}
