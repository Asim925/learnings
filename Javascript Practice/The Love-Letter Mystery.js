let s = "cba";

function Love(s) {
  let count = 0;
  for (let i = 0; i < Math.ceil(s.length / 2); i++) {
    if (s[i] != s[s.length - i - 1])
      count += Math.abs(s.charCodeAt(i) - s.charCodeAt(s.length - i - 1));
  }
  return count;
}
console.log(Love(s));
