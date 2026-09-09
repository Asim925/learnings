const p = new Promise((resolve, reject) => {
  // kick off some async like timer or fecth database
  //...

  setTimeout(() => {
    // ===if it works:
    // resolve("dekho chal gaya resolve");

    // ===if it doesnt work:
    reject(new Error("work-rejected"));
  }, 1500);
});

p.then((result) => console.log("result", result)).catch((err) =>
  console.log(err.message)
);
