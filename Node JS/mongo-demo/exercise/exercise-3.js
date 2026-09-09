const mongoose = require("mongoose");

mongoose
  .connect("mongodb://localhost:27017/mongo-exercises")
  .then(() => console.log("✅ Connected to local MongoDB..."))
  .catch((err) => console.error("❌ Connection failed:", err));

const courseSchema = mongoose.Schema({
  price: Number,
  name: String,
  author: String,
  tags: [String],
  date: { type: Date, default: Date.now },
  isPublished: Boolean,
});

// creating constructor using courseSchema :) named as "course"
const Course = mongoose.model("courses", courseSchema);

async function getCourses() {
  const courses = await Course.find({ isPublished: true }).or([
    { price: { $gte: 15 } },
    { name: /.*by.*/i },
  ]);

  console.log(courses);
}

getCourses();
