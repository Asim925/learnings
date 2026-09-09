// =============================== Logger =======================================

/*
    to get any export define in any module (file.js),
    we use require to get the "exports obj" of that module: "module.exports"
    we're saying that exports obj we got is named as logger
    no need to say logger.js, as its already known as js file
*/

/*
    const LoggerClass = require("./logger");
    const logger = new LoggerClass(); // instance using constructor class

    // here logger works as emitter
    logger.on("logging", (arg) => {
    console.log("logger listner called", arg);
    });

    logger.log("Here is the info about Mercedes CLR GTR");
*/

// =============================== HTTP Module =======================================

const http = require("http");
const server = http.createServer((req, res) => {
  if (req.url === "/") {
    res.write("Hello Bhaijana !!! server chala dia !!!");
    res.end();
  }
  if (req.url === "/api") {
    res.write(JSON.stringify([1, 2, 3]));
    res.end();
  }
}); // works as emitter
const port = 3000;
server.listen(port); // port
console.log(`Listening on port ${port}...`);
