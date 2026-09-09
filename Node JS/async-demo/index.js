console.log("before");
function getUser(id) {
  return new Promise((resolve, reject) => {
    setTimeout(() => {
      console.log("reading user bhai of this id:", id);
      resolve({ id: id, name: "asim" });
    }, 1500);
  });
}

// promise approach
/*
getUser(1)
  .then((user) => getRepos(user.name))
  .then((repos) => getCommits(repos[0]))
  .then((commits) => console.log(commits))
  .catch((err) => console.log("err.message"));
*/

// async await approach

async function displayCommits() {
  const user = await getUser(1);
  const repos = await getRepos(user.name);
  const commits = await getCommits(repos[0]);
  console.log(commits);
}
displayCommits();

console.log("after");

/* 
  getUser(1, showUser); // 1 is sent in callBack: showUser

  function showUser(user) {
    console.log(user);
    getRepos(user.name, showRepos);
  }

  function showRepos(repos) {
    console.log(repos);
    getCommits(repos[0], showCommits);
  }

  function showCommits(commits) {
    console.log(commits);
  }
*/

function getRepos(username) {
  return new Promise((resolve, reject) => {
    setTimeout(() => {
      console.log("getRepos_function_called with user:", username);
      resolve(["repo1", "rep2", "repo3"]);
    }, 1500);
  });
}

function getCommits(repo) {
  return new Promise((resolve, reject) => {
    setTimeout(() => {
      console.log("getCommit_function_called with this repo:", repo);
      resolve(["commit2", "commit1", "commit3"]);
    }, 1500);
  });
}
