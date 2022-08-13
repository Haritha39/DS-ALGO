//  Checking the sorted array and inserting
                 // j   i
const inputArray = [60, 30, 40, 20, 50, 80, 0, 70, 10]
                //  0   1  2    3   4   5  6  7    8

const InsertionSort = () => {
    for (let i = 1; i < inputArray.length; i++) {
        let j = i - 1;        
        let key = inputArray[i];
        for(j; j>=0; j--){
            inputArray[j+1] = inputArray[j];   
            if( inputArray[j] > key){
                break;
            }
        }
        inputArray[j+1] = key;
    }

    console.log( 'Sorted Array ' , inputArray);
}

InsertionSort();