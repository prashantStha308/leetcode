// Read this article to understand: https://en.wikipedia.org/wiki/Digital_root
// Or simply google "Digital Root"

// 1 + (num - 1) % 9 is a formula to get the digital root of any number except 0
var addDigits = function (num) {
    return num === 0 ? 0 : 1 + (num - 1) % 9;
};

const num = 454;
console.log(addDigits(num));