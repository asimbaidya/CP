// read 1 line from stdin & return if success else  throw error
function getLine(msg = "Input :"): string {
  const buf = prompt(msg);
  if (buf === null) {
    // return getLine(); // to make sure one line Entered
    throw Error(`Could not read ${msg}`); // throw error if nothing found in stdin
  }
  return buf;
}

const test_num = parseInt(getLine());

for (let i = 0; i < test_num; i++) {
  const big_num = getLine("num [max 100 digit]");

  const lsb = parseInt(big_num.slice(-1));

  if (lsb % 2 === 0) {
    console.log("even");
  } else {
    console.log("odd");
  }
}
