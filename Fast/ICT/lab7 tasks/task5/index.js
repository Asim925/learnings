let cart = ["apple", "banana", "mango"];
let backup = cart;

backup.push("orange");
console.log(cart);
console.log(backup);

let a = 10;
let b = a;
b = 50;
console.log(a);
console.log(b);

backup = [...cart];
backup.push("grape");
console.log("cart copy:", cart);
console.log("backup copy:", backup);

/*
an array is a reference type, so backup = cart makes both variables point to the same memory location.
changing one array changes the other because they are the same object.
a primitive type like a number is stored by value, so b = a copies the value 10 to a new memory location.
changing b does not change a because they are different locations.
using the spread operator [...cart] creates a new array in a new memory location, so backup becomes an independent copy.
*/
