'use strict';

const fs = require('fs');

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', function(inputStdin) {
    inputString += inputStdin;
});

process.stdin.on('end', function() {
    console.log('inputString ', inputString);
    inputString = inputString.split('\n');

    main();
});

function readLine() {
    return inputString;
}

/*
 * Complete the 'reverseArray' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY a as parameter.
 */

function main() {
    let arr = readLine().map(arrTemp => parseInt(arrTemp, 10));
    arr = arr.filter(each=> {return !isNaN(each)})
    const arrCount = arr.length;
    console.log(arrCount);
    console.log(arr);
    const sum = arr.reduce((prev, curr) => prev + curr);
    console.log('sum ',sum);

}
