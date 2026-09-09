function xorMatrix(m, first_row) {
  let current = first_row;
  for (let row = 1; row < m; row++) {
    let newRow = [];
    for (let i = 0; i < current.length - 1; i++)
      newRow.push(current[i] ^ current[i + 1]);
    current = [...newRow, current[current.length - 1] ^ current[0]];
  }
  return current;
}

console.log(xorMatrix(2, [6, 7, 1, 3]));
