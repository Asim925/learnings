const express = require("express");
const app = express();
app.use(express.json());
const movies = require("../routes/movies");
app.use("/api/movies", movies);

const port = process.env.PORT || 3000;

app.listen(port, () => console.log(`listening on ${port} port`));
