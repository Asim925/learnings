function f(x) {
  return 2 * x ** 3 - 2 * x - 5; //  book wali equation 2.x cube - 2x -5
}

const average = (a, d, funcA, funcB) => {
  return (a * funcB - b * funcA) / (funcB - funcA);
};

BisectionMethod([1.5, 2.5], 4);

function BisectionMethod(interval, iter) {
  let a = interval[0]; // startt..
  let b = interval[1]; // ending
  console.log(`\nAs given, Root of the function lies between ${a} & ${b}\n`);

  for (let i = 0; i < iter; i++) {
    console.log(`\n============== Iteration ${i + 1} ==============\n`);
    let funcA = parseFloat(f(a).toFixed(4));
    let funcB = parseFloat(f(b).toFixed(4));
    let c = average(a, b, funcA, funcB); // middle
    let funcC = parseFloat(f(c).toFixed(4));

    console.log(
      `So f(a) --->   f(${parseFloat(a.toFixed(4))}) = ${funcA}

So f(b) --->  f(${parseFloat(b.toFixed(4))}) = ${funcB}

The average value of a & b is ${parseFloat(c.toFixed(4))} || So f(c) --->  f(${parseFloat(c.toFixed(4))}) = ${funcC}\n`,
    );

    if (funcA * funcC < 0) {
      b = c;
      //   funcB = parseFloat(f(c).toFixed(4));
      if (parseFloat(a.toFixed(4)) == parseFloat(b.toFixed(4))) {
        console.log(`The root of the funtion is ${parseFloat(a.toFixed(4))}\n`);
        break;
      }

      if (i == iter - 1)
        console.log(
          `Since [f(${parseFloat(a.toFixed(4))}) * f(${parseFloat(c.toFixed(4))}) < 0], Root of the function is nearly ~ ${parseFloat(c.toFixed(4))}\n`,
        );
      else
        console.log(
          `Since [f(${parseFloat(a.toFixed(4))}) * f(${parseFloat(c.toFixed(4))}) < 0], Root of the function lies betwen ${parseFloat(a.toFixed(4))} & ${parseFloat(c.toFixed(4))}\n`,
        );
      c = average(a, b, funcA, funcC);
    } else {
      a = c;
      //   funcA = parseFloat(f(c).toFixed(4));
      if (parseFloat(a.toFixed(4)) == parseFloat(b.toFixed(4))) {
        console.log(`The root of the funtion is ${parseFloat(a.toFixed(4))}\n`);
        break;
      }
      if (i == iter - 1)
        console.log(
          `Since [ f(${parseFloat(c.toFixed(4))}) * f(${parseFloat(b.toFixed(4))}) < 0 ], Root of the function is nearly ~ ${parseFloat(c.toFixed(4))}\n`,
        );
      else
        console.log(
          `Since [f(${parseFloat(a.toFixed(4))}) * f(${parseFloat(b.toFixed(4))}) < 0], Root of the function lies betwen ${parseFloat(a.toFixed(4))} & ${parseFloat(b.toFixed(4))}\n`,
        );
      c = average(a, b, funcC, funcB);
    }
  }
}
