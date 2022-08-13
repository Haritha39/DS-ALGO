class Stack {
    constructor() {
        this.array = [];
    }

    push(item){
        return this.array.push(item);
    }
    pop() {
        if(this.array.length === 0){
            return 'Underflow'
        }
        return this.array.pop();
    }
    peek(){
        if(this.array.length === 0) {
            return 'Empty stack'
        }
        console.log(this.array[this.array.length -1]);
    }
    isEmpty() {
        return this.array.length === 0;
    }
    print(){
        console.log(this.array);
    }
}

let stackObj = new Stack();
stackObj.push(1);
stackObj.push(2);
stackObj.push(3);
stackObj.push(4);

console.log('push');
stackObj.print();

console.log('pop');
stackObj.pop();
stackObj.print();

console.log('peek');
stackObj.peek();

