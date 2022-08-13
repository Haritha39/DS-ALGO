// Bubble - swapping side by side elements - after every iteration array will start sorted.
const inputArray = [60, 30, 40, 20, 50, 80, 0, 70, 10]


const BubbleSort = () => {
    for (let i = 0; i < inputArray.length; i++) {
        for (let j = i; j < inputArray.length; j++) {
            if(inputArray[j] > inputArray[j+1]){
                let temp = inputArray[j];
                inputArray[j] = inputArray[j+1];
                inputArray[j+1] = temp;
            }
        }
    }

    console.log( 'Sorted Array ' , inputArray);
}

BubbleSort();