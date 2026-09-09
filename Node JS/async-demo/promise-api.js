/*
const p = Promise.resolve({ id: 12, name: "asim bhai" });
p.then((result) => console.log(result));

const p2 = Promise.reject(new Error("rejected reason"));
p2.catch((er) => console.log(er));
*/

const p1 = new Promise((resolve, reject) => {
  console.log("1 async done");
  setTimeout(() => {
    // resolve(1);
    // suppose it fails
    reject(new Error("failed"));
  }, 1500);
});

const p2 = new Promise((resolve) => {
  console.log("2 async done");
  setTimeout(() => {
    resolve(2);
  }, 1500);
});

// if both p1, p2 are done the next will work
Promise.all([p1, p2])
  .then((result) => console.log(result))
  .catch((err) => console.log("error:", err.message));
// if one of them fails, the all promises will be rejected

// Promise.race([p1, p2]).then().catch(); // if one of them works, then do something
