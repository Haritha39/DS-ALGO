// Object literals equals to structures

class Structure{
    constructor(id, name){
        this.id = id;
        this.name = name
    }
};

let obj1 = new Structure(1,'hari');
let obj2 = new Structure(2,'sri');

console.log(obj1, obj2);
console.log('type ', typeof obj1);