var url = "https://mylogger.io/log";
const EventEmitter = require("events");

class LoggerClass extends EventEmitter {
  log(message) {
    console.log(message);

    this.emit("logging", { msg: message }); // raising*
  }
}
module.exports = LoggerClass; // value is log, key is logFu

// we're actually adding the property name log in the
// module: {
//    ...
//    exports {
//      logFu: log
//    }
// }

// can be seen in the exports obj in module obj
// console.log(module);
