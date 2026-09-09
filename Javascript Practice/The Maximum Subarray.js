function maxSubarray(arr) {
  //   if all are negative
  let max = Math.max(...arr);
  if (max < 0) return [max, max];

  let sumBySequence = 0;
  if (arr.every((val) => val > 0)) sumBySequence = arr.reduce((a, b) => a + b);
  else {
    for (let i = 0; i < arr.length; i++)
      for (let j = i; j < arr.length; j++) {
        let sum = arr.slice(i, j + 1).reduce((a, b) => {
          return a + b;
        }, 0);
        if (sumBySequence < sum) sumBySequence = sum;
      }
  }

  let sumOfSubArray = 0;
  for (let i = 0; i < arr.length; i++) if (arr[i] > 0) sumOfSubArray += arr[i];

  return [sumBySequence, sumOfSubArray];
}

let arr = [1, 2, 3, 4];
console.log(maxSubarray(arr));

// subarray = sequence se
// subsequence = kahin se bhi subsets
