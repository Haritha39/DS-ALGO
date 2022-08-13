const inputArray = [60, 30, 40, 20, 50, 80, 0, 70, 10]
                  //0    1  2   3    4   5  6  7    8

const heapify =(arr, len, i)=>{
    let largest = i;
    let left = 2 * i +1;
    let right = 2 * i +2;
    if(left < len && arr[left] > arr[largest]) {
        largest = left;
    }
    if(right < len && arr[right] > arr[largest]) {
        largest = right;
    }
    if(largest != i){
        let temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;
        console.log('Heapify sub tree ' );
        heapify(arr , len, largest);
    }
}

const HeapSort = () => {
    let len = inputArray.length;
    for(let i = Math.floor(len/2) -1 ;i >=0 ;i--){
        console.log('Heapify ');
        console.log('i ' , i);
        heapify(inputArray, len, i);
        console.log(' After every heapify ', inputArray);
    }

    for (let i = len - 1; i > 0; i--) {
        // Move current root to end
        var temp = inputArray[0];
        inputArray[0] = inputArray[i];
        inputArray[i] = temp;

        // call max heapify on the reduced heap
        heapify(inputArray, i, 0);
    }

    console.log(inputArray);
}

HeapSort();