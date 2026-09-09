// ================================================== Built in FS (file system) module ============================================================= !!!

/* 
    there are 2 kinds of module poperties: sync OR async,
    sync stops the code and first execute the response, 
    async continues the code execution so on, when the response is found, call backk function is called 
*/

const fs = require("fs");

// ============================ synchronous - blocking method ============================>>

// this will stop the code until response:

const filesInCurrentFolderSYNC = fs.readdirSync("./"); //
console.log(filesInCurrentFolderSYNC);

// ========================= asynchronous - non blocking method ============================>>

//** this will not stop the code until response:

const filesInCurrentFolderASYNC = fs.readdir("./", (err, result) => {
  if (err) console.log(err);
  else console.log(result);
});
console.log(filesInCurrentFolderASYNC);
