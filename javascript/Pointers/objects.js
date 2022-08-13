// THere are no pointers in js
// Primitive data types - number,string,boolean,null etc are immutable
// objects and arrays are mutable

var obj = {
    a: 1,
    b: 2,
    c: 3
};
valueWontChange(obj);
console.log('vlaue wont change ', obj);
pointers(obj);
console.log('pointers ', obj);

function valueWontChange(val){
    val ={a:4,b:5};
}

function pointers(val) {
    val.a = 6;
    val.b = 7;
    val.c = 8;
}