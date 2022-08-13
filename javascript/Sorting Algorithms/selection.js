// find out the minimum element from the current element and swap them. and repeat with every position
// Selection - smallest index - swap

const inputArray = [60, 30, 40, 20, 50, 80, 0, 70, 10]


const selectionSort = () => {
    for (let i = 0; i < inputArray.length; i++) {
        let smallestElementPosition = i;
        for (let j = i; j < inputArray.length; j++) {
            if(inputArray[smallestElementPosition] > inputArray[j+1]){
                smallestElementPosition = j+1;
            }
        }
        let temp = inputArray[i];
        inputArray[i] = inputArray[smallestElementPosition];
        inputArray[smallestElementPosition] = temp;
    }

    console.log( 'Sorted Array ' , inputArray);
}

selectionSort();