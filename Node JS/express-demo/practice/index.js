const express = require("express");
const courses = require("../routes/courses");
const app = express();
app.use(express.json());
app.use("/api/courses", courses);

app.get("/", (req, res) => {
  res.send("Hello World");
});

const port = process.env.PORT || 3000;
app.listen(port, () => console.log(`listening on ${port} port`));
