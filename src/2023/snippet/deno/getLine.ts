// read 1 line from stdin & return if success else  throw error
function getLine(msg = "Input :"): string {
  const buf = prompt(msg);
  if (buf === null) {
    // return getLine(); // to make sure one line Entered
    throw Error(`Could not read ${msg}`); // throw error if nothing found in stdin
  }
  return buf;
}
