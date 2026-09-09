const mongoose = require("mongoose");

mongoose
  // .connect(
  //   "mongodb+srv://asim925:Hello1World@cluster.jayxiyb.mongodb.net/playground?retryWrites=true&w=majority&appName=Cluster"
  // )
  .connect("mongodb://localhost:27017/playground")
  .then(() => console.log("✅ Connected to MongoDB.."))
  .catch((err) => console.error("❌ Connection failed:", err));

// defining shape of the objects: blueprint
const courseSchema = new mongoose.Schema({
  name: String,
  author: String,
  tags: [String],
  date: { type: Date, default: Date.now },
  isPublished: Boolean,
});

// providing blueprint:
// making constructor of the course schema
const Course = mongoose.model("course", courseSchema);

async function createCourse() {
  const course = new Course({
    name: "frontend",
    author: "misa",
    tags: ["react", "next"],
    isPublished: true,
  });

  const result = await course.save();
  console.log(result);
}

// createCourse();

async function getCourses() {
  // const allCourses = await Course.find();
  // console.log(allCourses);
  const pageNo = 3;
  const pageSize = 10;
  // we can apply filters
  const courses = await Course.find({ author: /.*as.*/i }) // .inclucde("as").toLowerCase()
    .or([{ name: "fullstack" }, { isPublished: true }])
    .and([{ author: "misa", isPublished: true }])
    // .find({ price: { $gt: 20, $lt: 50, $in: [23, 43, 34] } })
    .skip((pageNo - 1) * pageSize) // skip first 20 if on page 3
    .limit(10)
    .sort({ name: 1 })
    .select({ name: 1, _id: 0 });
  console.log(courses);
}
// getCourses();

async function updateCourse(id) {
  // approach: query first
  /*
    const course = await Course.findById(id);
    if (!course) {
      console.log("Course not found");
      return;
    }
    course.isPublished = true;
    course.author = "Updated Author yelle";

    const result = await course.save();
    console.log(result);
  */
  //==========================================
  // approach: update first

  const result = await Course.findByIdAndUpdate(
    id,
    {
      $set: { isPublished: false, author: "UPDATE_FIRST_APPROACH new author" },
    }, // to return the updated document
    { new: true }
  );
  console.log(result);
}
// updateCourse("690c6e9d2ad81fa611c6016c");

async function removeCourse(id) {
  const deletedCourse = await Course.findByIdAndDelete(id);
  console.log(deletedCourse);
}

// removeCourse("690c6e9d2ad81fa611c6016c");
