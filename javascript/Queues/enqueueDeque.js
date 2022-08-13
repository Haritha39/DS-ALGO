class Queue{
    constructor(){
        this.array = [];
    }

    iEmpty(){
        return this.array.length === 0
    }
    enqueue(item){
        return this.array.push(item);
    }
    dequeue(){
        if(this.iEmpty()){
            console.log('Undeflow');
        }
        return this.array.shift()
    }
    front(){
        if(this.iEmpty()){
            console.log('EMpty queue');
        }
        console.log(this.array[0]);
    }
    print(){
        console.log(this.array);
    }
}

let queueObj = new Queue();
queueObj.enqueue(10);
queueObj.enqueue(20);
queueObj.enqueue(30);
queueObj.enqueue(40);
queueObj.enqueue(50);
queueObj.enqueue(60);
queueObj.enqueue(70);

console.log('enqueue ');
queueObj.print();

queueObj.dequeue();
queueObj.dequeue();

console.log('dequeue ');
queueObj.print();

console.log('front ');
queueObj.front();

console.log('print ');
queueObj.print();

