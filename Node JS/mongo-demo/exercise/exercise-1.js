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

const Course = mongoose.model("courses", courseSchema);

async function getCourses() {
  const courses = await Course.find({ isPublished: true, tags: "backend" })
    .sort({ name: 1 })
    .select({ name: 1, author: 1, _id: 0 });

  console.log(courses);
}

getCourses();
