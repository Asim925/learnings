const EventEmitter = require("events"); // import

const emitter = new EventEmitter(); // Constructor function instance

// .addListner & .on are same

emitter.on("messageLogged", (arg) => {
  console.log("emittter addListener called", arg);
});

// to do something when something happens
emitter.emit("messageLogged", { id: 1, url: "https://" });
