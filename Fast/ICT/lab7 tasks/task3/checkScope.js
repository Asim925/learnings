function checkScope() {
  if (true) {
    var x = 10;
    let y = 20;
  }

  console.log(x);
  console.log(y);

  // Predicted. : 10
  // ReferenceError: y is not defined
}

checkScope();

// Predicted output:  30
console.log(z);
var z = 30;
// Actual output:  undefined

// Predicted output:
// ReferenceError: Cannot access 'a' before initialization
console.log(a);
let a = 30;
// Actual output:
// ReferenceError: Cannot access 'a' before initialization

// var is hoisted to function scope and initialized as undefined, so it can be accessed before its declaration but it will be undefined
// let is hoisted too, but it stays in block scope and is kept in the TDZ until initialization.
// That is why var leaks through function scope while let stays restricted to block scope.
// inshort var variables can be used outside of the scope while let variables cant be used outside of the scope.. both are hoisted but var stays undefined till declaration and let cant be use before declaration.
