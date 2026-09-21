// // Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.


function strStr(haystack, needle) {

    let i = 0;
    let j = 0;
    let fo = -1;

    const match = () => {
        if(j === 0) fo = i;
        i++;
        j++;
    }

    const reset = ()=> {
        if (fo !== -1) {
            i = fo + 1;
        } else {
            i++;
        }

        j = 0;
        fo = -1;
    }

    while (i < haystack.length) {

        if (haystack[i] === needle[j]) {
            match();

            if (j === needle.length) {
                return fo;
            }
        } else {
            reset();
        }
    }

    return -1;
}


let haystack = "mississippi"
let needle = "issip"

console.log("res: ", strStr(haystack, needle));