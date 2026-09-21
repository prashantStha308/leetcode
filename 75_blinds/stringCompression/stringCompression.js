const compressString = (char) => {
    let s = "";
    const len = char.length;
    let count = 0;


    if (len === 1) {
        s = char[0];
        return s.length;
    }

    for (let i = 0; i < len-1; i++){
        console.log("Current Char:", char[i]);

        if (char[i] !== char[i + 1] && char[i] !== char &&count === 0) {
            s += char[i];
        }

        if (char[i] === char[i + 1]) {
            if (count === 0) {
                s += char[i];
                count++;
            }
            count++;

            if (char[i] !== char[i + 2]) {
                count++;
                s += String(count);
                count = 0;
            }
        }
    }
    
    console.log(s);

    return s.length;
}

const arr = ["a", "a", "b", "b", "c", "c", "c"];
console.log(compressString(arr));