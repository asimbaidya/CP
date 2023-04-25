# rust + deno

```typescript
// read 1 line from stdin & return if success else  throw error
function getLine(msg = "Input :"): string {
  const buf = prompt(msg);
  if (buf === null) {
    // return getLine(); // to make sure one line Entered
    throw Error(`Could not read ${msg}`); // throw error if nothing found in stdin
  }
  return buf;
}
```

## 23-char-to-ascii-better.rs

```typescript
use std::io::{self, BufRead};

fn main() {
    let stdin = io::stdin();
    let mut lines = stdin.lock().lines().map(Result::unwrap);

    let num_tests: usize = lines.next().unwrap().parse().unwrap();

    for line in lines.take(num_tests) {
        //> (1)
        let positions = line.chars().map(|c| c as u8 - b'A' + 1);
        println!(
            "{}",
            positions
                .map(|p| p.to_string())
                .collect::<Vec<_>>()
                .join(" ")
        );

        //> (2)
        let res = line
            .chars()
            .map(|c| c as u8 - b'A' + 1)
            .map(|c| c.to_string())
            .collect::<Vec<_>>()
            .join(" ");
        println!("{res}");

        //> (2) but, wtf if <_> ?
        // _ is short for `String` because  type  of vector is knon as to_string() return String
        let res = line
            .chars()
            .map(|c| c as u8 - b'A' + 1)
            .map(|c| c.to_string())
            .collect::<Vec<String>>()
            .join(" ");
        println!("{res}");
    }
}
```

## 23-char-to-digit.rs

```typescript
use std::io::BufRead;

fn main() {
    let mut lines = std::io::stdin()
        .lock()
        .lines()
        .map(|line| line.expect("Errro"));

    let test: usize = lines.next().unwrap().parse().unwrap();

    for _ in 1..=test {
        // input_string ->  [A-Z]
        let input_string = lines.next().unwrap();

        //>(1)
        // A - 65
        // 65 - 64 => 1
        input_string
            .chars()
            .for_each(|x| print!("{}", (x as u8) - 64));
        println!();

        //>(2) //
        input_string.chars().for_each(|c| {
            if (c as u8) < b'A' || (c as u8) > b'Z' {
                panic!("Invalid Input!");
            }
            let alpha_pos = c as u8 - b'A' + 1;
            print!("{alpha_pos}");
        })
    }
}
```

## byte-and-u8.rs

```typescript
fn main() {
    let a = b'A';
    println!("a = {a}");

    //
    let a = b"ABCDEFGHIJK";
    println!("a = {a:?}");

    //
    a.iter().for_each(|x| println!("{x}"));
}
```

## take.rs

```typescript
use std::io::{self, BufRead};

fn main() {
    let stdin = io::stdin();
    let mut lines = stdin.lock().lines().map(Result::unwrap);

    let num_tests: usize = lines.next().unwrap().parse().unwrap();

    for line in lines.take(num_tests) {
        // line is the input taken by take :)
        println!("line = {line}");
    }

    // error!
    // lines is moved in previous call, in order touse again,
    // need redeclaration!
    // for line in lines.take(num_tests) {
    //     // line is the input taken by take :)
    //     println!("line = {line}");
    // }

    //  works, notice:  num_tests is not affected anywhere!
    let stdin = io::stdin();
    let mut lines = stdin.lock().lines().map(Result::unwrap);
    for line in lines.take(num_tests) {
        // line is the input taken by take :)
        println!("line = {line}");
    }
}
```

## type-of.rs

```typescript
use std::any::type_name;

fn type_of<T>(_: T) -> () {
    println!("Type = {}", type_name::<T>());
}
fn main() {
    let x = 21;
    let y = 2.5;
    type_of(&y);
    type_of(x);
    type_of(&main);
    type_of(main);
    type_of(&{ || "HI" });
    type_of(b'A');
    type_of(65 as u8);
    type_of(b"A");
}
```
