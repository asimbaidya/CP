// deno 1/52

const buf = prompt("Enter total Test:");
console.log(buf);

const test = buf != null && !isNaN(Number(buf)) ? parseInt(buf) : 0;

for (let i = 0; i < test; i++) {
  const inputBuf = prompt(`inter ${i + 1}th num:`);
  const num = inputBuf != null && !isNaN(Number(inputBuf))
    ? parseInt(inputBuf)
    : 0;
  if (num % 2 === 0) {
    console.log("Even");
  } else {
    console.log("Odd");
  }
}
