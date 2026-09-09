// =============================== BuiltIn OS module ==========================================

// we have different features of this module which tells us abouot the Operating System of our PC

const os = require("os");
const totalMemory = os.totalmem();
const freeMemory = os.freemem();
console.log("totalMemory", totalMemory, "freeMemory", freeMemory);
