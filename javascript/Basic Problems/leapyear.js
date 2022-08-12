//The year is multiple of 400.
//The year is multiple of 4 and not multiple of 100.
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

const main=()=>{
    let n = parseInt(readLine(), 10);
    let result  = ((n%4===0 && n%100 !==0 )|| (n%400 === 0));
    if(result){
        console.log('Leap year');
    } else {
        console.log('Not a leap year');
    }
}