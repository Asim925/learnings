// Array to store tasks
const tasks = [];

// Function to add a task
function addTask(task) {
  const cleanTask = typeof task === "string" ? task.trim() : "";

  if (!cleanTask) {
    console.log("errorr: task cannot be empty.");
    return;
  }

  if (tasks.includes(cleanTask)) {
    console.log(`error: "${cleanTask}" already exists in the list.`);
    return;
  }

  tasks.push(cleanTask);
  console.log(`Task added: ${cleanTask}`);
}

// Function to remove a task by its index
function removeTask(index) {
  if (index < 0 || index >= tasks.length) {
    console.log("Error: Invalid task index.");
    return;
  }

  const removedTask = tasks.splice(index, 1)[0];
  console.log(`Task removed: ${removedTask}`);
}

// Mark a task as done by adding the required prefix
function markDone(index) {
  if (index < 0 || index >= tasks.length) {
    console.log("Error: Invalid task index.");
    return;
  }

  tasks[index] = "[Done] " + tasks[index];
  console.log(`Task ${index + 1} marked as done.`);
}

// Replace a task with new text
function updateTask(index, newText) {
  if (index < 0 || index >= tasks.length) {
    console.log("Error: Invalid task index.");
    return;
  }

  const cleanText = typeof newText === "string" ? newText.trim() : "";
  if (!cleanText) {
    console.log("Error: New task text cannot be empty.");
    return;
  }

  tasks[index] = cleanText;
  console.log(`Task ${index + 1} updated to: ${cleanText}`);
}

// Return the number of tasks that are not yet marked as done
function countPending() {
  return tasks.filter((task) => !task.startsWith("[Done] ")).length;
}

// Function to display all tasks
function displayTasks() {
  console.log("To-Do List:");

  if (tasks.length === 0) {
    console.log("No tasks available.");
    return;
  }

  tasks.forEach((task, index) => {
    console.log(`${index + 1}: ${task}`);
  });
}

// Function to clear all tasks
function clearTasks() {
  // `tasks` is declared with const, so it cannot be reassigned to a new array.
  // Setting `length` to 0 removes every element from the existing array object,
  // which is why this still works even though the variable itself is constant.
  tasks.length = 0;
  console.log("All tasks cleared.");
}

// Testing the functions
addTask("Finish project");
addTask("Study for exam");
addTask("Study for exam");
addTask("");
addTask("Go to gym");
displayTasks();

markDone(0);
markDone(99);

updateTask(1, "Prepare for quiz");
updateTask(10, "Invalid task");

console.log("Pending tasks count:", countPending());

displayTasks();
removeTask(2);
clearTasks();
displayTasks();
