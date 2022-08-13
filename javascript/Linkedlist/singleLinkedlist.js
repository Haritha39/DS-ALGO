class Node {
    constructor(element) {
        this.element = element;
        this.next = null;
    }
}

class LinkedList {
    constructor() {
        this.head = null;
    }
    // functions to be implemented
    add(element) {

        let item = new Node(element);
        if (this.head === null) {
            this.head = item;
        } else {
            let current = this.head;
            while (current.next) {
                current = current.next;
            }
            current.next = item;
        }

    }
    insertAt(element, location) {
        let item = new Node(element);
        if (this.isEmpty()) {
            this.head = item;
        } else {
            let counter = 1;
            let current = this.head;
            let insertAtNode = null;
            while (current.next) {
                if (counter === location) {
                    insertAtNode = current;
                    break;
                }
                counter = counter + 1;
                current = current.next;
            }
            if (insertAtNode) {
                let temp = insertAtNode.next;
                item.next = temp;
                insertAtNode.next = item;
            }
        }
    }
    removeFrom(location) {
        if (this.isEmpty()) {
            console.log('Linked list is empty');
        } else {
            let current = this.head;
            let prev = current;
            let counter = 0;
            while (current.next) {
                if (counter === location) {
                    break;
                }
                counter += counter;
                prev = current;
                current = current.next;
            }
            prev.next = current.next;
        }
    }
    removeElement(element) {
        if (this.isEmpty()) {
            console.log('Linked list is empty');
        } else {
            let current = this.head;
            let prev = current;
            while (current.next) {
                if (current.element === element) {
                    break;
                }
                prev = current;
                current = current.next;
            }
            prev.next = current.next;
        }
    }

    // Helper Methods
    isEmpty() {
        return !this.head;
    }
    // size_Of_List
    sizeOfList() {
        let current = this.head;
        let counter = 0;
        while (current) {
            counter += 1;
            current = current.next;
        }
        console.log('Size of linked list ', counter);
    }
    // PrintList
    printLinkedList() {
        let current = this.head;
        while (current) {
            console.log(current.element);
            current = current.next;
        }
    }
}

let ll = new LinkedList();

ll.add(10);
ll.add(20);
ll.add(30);
ll.add(40);
ll.add(50);
ll.printLinkedList();

console.log('insert at');
ll.insertAt(60, 2);
ll.printLinkedList();

console.log('Remove element');
ll.removeElement(30);
ll.printLinkedList();

console.log('Remove element At');
ll.removeElement(4);
ll.printLinkedList();

ll.sizeOfList();