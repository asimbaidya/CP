async function write(msg: string): Number {
  const encoder = new TextEncoder();
  const data = encoder.encode(msg);
  await Deno.write(Deno.stdout.rid, data); // 11
}

let start = 1000;
let wtn = 5; // wait til newline
while (start > 0) {
  write(start.toString());
  wtn--;
  start--;
  if (wtn === 0) {
    write("\n");
    wtn = 5;
  } else {
    write(" ");
  }
}
