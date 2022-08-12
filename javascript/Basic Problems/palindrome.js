// Ex: Input = 12345 output = false , Input = 121 output true
'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.replace(/\s*$/, '')
        .split('\n')
        .map(str => str.replace(/\s*$/, ''));
    main();
});

function readLine() {
    return inputString[currentLine++];
}
function main() {
    // const n = parseInt(readLine(),10);

    const n = readLine();
    let reversed = n.split('').reverse().join('');
    console.log('reverse ', reversed);
    if(n === reversed) {
        console.log('palindrome');
    } else {
        console.log('not a palindrome');
    }
}