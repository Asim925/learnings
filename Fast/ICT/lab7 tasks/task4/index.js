const student = {
  name: "hello",
  rollNo: 12,
  marks: [100, 90, 80],
};

console.log(student.name);
console.log(student["rollNo"]);

let key = "rollNo";
console.log(student[key]);

student.marks[1] = 10;

student.grade = "A+";

console.log(student);

student = { new: "new value" };

/*
assigning new object is not allowed as object is a const. while the properties getting changed is because the object 
is a reference type, in the memory the object is pointed that is constant but the data inside that referenced object is changed 
*/
