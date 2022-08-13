class Node {
    constructor(element) {
        this.prev = null;
        this.element = element;
        this.next = null;
    }
}

class DoubleLinkedList {
    constructor() {
        this.head = null;
    }
    isEmpty() {
        return !this.head;
    }

    add(element) {
        let item = new Node(element);
        if (this.isEmpty()) {
            this.head = item;
        } else {
            let current = this.head;
            while (current.next) {
                current = current.next;
            }
            item.prev = current;
            current.next = item;
        }
    }

    insertAt(element, location){
        let item = new Node(element);
        if (this.isEmpty()) {
            this.head = item;
        } else {
            let current = this.head;
            let before = current;
            let counter = 1;
            while (current.next) {
                if(location === counter){
                    break;
                }
                before = current;
                current = current.next;
                counter += 1;
            }
            item.next = current;
            before.next = item;
            current.prev = item;
            item.prev = before;            
        }
    }

    removeAt(location){
        if(this.isEmpty()){
            console.log('Double linked list is empty');
        } else {
            let current = this.head;
            let counter = 1;
            while(current){
                counter += 1;
                current = current.next;
            }

        }
    }

    print(){
        let current = this.head;
        while(current){
            console.log(current.element);
            current = current.next;
        }
    }
}

let dll = new DoubleLinkedList();

dll.add(10);
dll.add(20);
dll.add(30);
dll.add(40);
dll.add(50);
dll.add(60);
dll.add(70);

console.log('Print');
// dll.print();

dll.insertAt(22, 3);
console.log('Insert At');
dll.print();