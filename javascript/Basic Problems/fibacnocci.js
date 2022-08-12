// 0 1 1 2 3 5 8 13 21  (Recursion)
// Finding nth fibonocci number Ex: Input = 5 output = 3

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

const fibanocci = (num)=>{
    if(num === 1){
        return 0;
    }
    if(num === 2){
        return 1;
    }
    return fibanocci(num-1) + fibanocci(num-2);
}

const main = () => {
    const n = parseInt(readLine(), 10);
    let result = fibanocci(n);
    console.log(result);
}
