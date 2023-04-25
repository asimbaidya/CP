// utility function
function getLine(msg = "Input :"): string {
  const buf = prompt(msg);
  if (buf === null) {
    // return getLine(); // to make sure one line Entered
    throw Error(`Could not read ${msg}`); // throw error if nothing found in stdin
  }
  return buf;
}

const total_test = parseInt(getLine("total test:"));

for (let i = 0; i < total_test; i++) {
  const num = parseInt(getLine("num:"));
  if (num % 2 === 0) {
    console.log("even");
  } else {
    console.log("odd");
  }
}
