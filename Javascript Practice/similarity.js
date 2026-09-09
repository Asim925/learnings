function sim(s) {
  let count = s.length;
  for (let i = 1; i < s.length; i++) {
    let part = s.slice(i, s.length);
    for (let j = 0; j < part.length; j++) {
      if (part[j] !== s[j]) break;
      count++;
    }
  }
  return count;
}
console.log(sim("aa"));
