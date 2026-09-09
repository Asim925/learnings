try {
  let result = JSON.parse('{"name": "asim nazeer", "age": 18}');

  console.log(result.name);
} catch (error) {
  console.log("Oops! Something went wrong:");
  console.log(error.message);
}
