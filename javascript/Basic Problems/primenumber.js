// A number divisble by 1 and itself
// Ex: Input 5 output - 2 , 3, 5,7 ,11

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

const primeCondition=(num)=>{
    let count = 0;
    for(let i=1;i<= num;i++){
        if(num % i === 0){
            count+=1
        }
    }
    return count === 2;
}

const main=()=>{
    let n = parseInt(readLine(),10);
    for(let i=1; i<= n;i++){
        if(i ==2){
            console.log(i + '\n');
        }
        // console.log(i,'%2 ', i%2 )
        if(i%2 !== 0) {
            let result = primeCondition(i);
            if(result){
                console.log(i + '\n');
            }
        }
    }
}