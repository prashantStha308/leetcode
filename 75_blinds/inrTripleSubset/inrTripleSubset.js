/*

Basically, there's an array and you have to return true if a particular sequence is present.

The sequence is: x , y , z
where, x < y < z

so, x is the smallest and z is the greatest and y is somewhere in between them

what we can do? 
lets say, var temp = x,
and say b is next variable in array
and say, bool is the boolean variable

arr = [20,100,10,12,5,13] 
triplets here: [ 10 , 12 , 13 ]
expects true cuz triplets exists

temp = arr[0] === 20;
 when i = 0:
    if( temp < arr[i+1 || 2] ){
        // possible start of sequence
        bool = true;
        temp = arr[i+1]
    }else{
        
    }






*/

// function main(arr){

//     let bool = false;
//     let temp = arr[0];
//     let count = 1;
//     for( i = 0 ; i < arr.length ; i++ ){

//         if( temp < arr[i+1] ){
//             bool = true
//             count++;
//         }else{
//             bool = false
//         count = 1;
//         }
//         temp = arr[i+1];
//         if( count === 3 ){
//             break;
//         }
//     }
//     return bool;
// }

var increasingTriplet = function(nums) {
    let res = false;
    for( let i=0; i<nums.length; i++ ){
        if( nums[i] < nums[i+1] && nums[i+1] < nums[i+2] ){
            res = true;
            break;
        }
    }

    return res;
};

let abc = [20,100,10,12,5,13] //expected true
//  x < y < z

console.log( increasingTriplet(abc) ? "true" : "false" );

// The description is misleading, this shit idk