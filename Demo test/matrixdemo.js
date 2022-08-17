/*
 * Complete the 'countGroups' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING_ARRAY related as parameter.
 */

function countGroups() {
    let related = ['00000', '10000', '00100', '00010', '00001'];
    // Write your code here
    console.log(related);
    let array = [];
    for (let i = 0; i < related.length; i++) {
        let splitarray = related[i].split('').map((each) => parseInt(each, 10));
        array.push(splitarray);
    }
    console.log(array);
    let count = 0;
    for (let i = 0; i < array.length; i++) {
        for (let j = 0; j < array[i].length; j++) {
            if (array[i][j] === 1 && array[j][i] === 1) {
                count += 1;
            }
        }
    }
    console.log('count ', count);
    return count;
}

function main() {
    const result = countGroups();
    console.log(result);
}
main();
