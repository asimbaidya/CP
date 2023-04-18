# rust 🦀

## will parse panic ?

```rust
fn main() {
    let s = String::from("32\n\n\n");
    let num: i32 = s.parse().unwrap();
    // panic!
    // to avoid panic,
    // use
    let num: i32 = s.trim().parse().unwrap();
}
```

## what is efficient way to read line in rust?

- not need to declare variable beforehand for input!!

```rust
use std::io::{self, BufRead};

fn main() {
   // lines will do the reading
    let stdin = io::stdin();
    let mut lines = stdin.lock().lines().map(|line| line.unwrap());

    // read usize (or what ever premitive type you want)
    let t: usize = lines.next().unwrap().parse().unwrap();

    //
    let s = lines.next();
    println!("s = {s:?}");
    //> s = Some("...")

    let s = s.unwrap();
    println!("s = {s:?}");
    //> s = ...

    // tho, to much unwrap :(

    // but helpful in this type of case
    let line1: String = lines.next().unwrap();
    let line2: String = lines.next().unwrap();

}
```

## how to use HashMap in rust ?

```rust
use std::collections::HashMap;
fn main() {
    let mut vowel = HashMap::new();
    vowel.insert(32, 3);
    vowel.insert(32, '3' as i32);
}
```

## how & when to use match ?

```rust
// when multiple value need to match against 1, matches! can reduce code size
let ch = 'a';
matches!(ch, 'a' | 'e' | 'i' | 'o' | 'u'); // true

let ch = 'x';
matches!(ch, 'a' | 'e' | 'i' | 'o' | 'u'); // false
```

## how to know if a char in a string is alphabetic?

```rust
for ch in line_buf.trim().chars() {
    if matches!(ch, 'a' | 'e' | 'i' | 'o' | 'u') {
        vowels.push(ch)
    // with .is_alphabetic(); method
    } else if ch.is_alphabetic() {
        consonants.push(ch)
    }
}
```

## how declare vector of specific type & char vector to String ?

```rust
let mut vowels: Vec<char> = vec![];
let mut consonants: Vec<char> = vec![];
// ...pushig values
println!("{}", vowels.iter().collect::<String>());
println!("{}", consonants.iter().collect::<String>());
```
