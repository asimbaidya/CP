# day(1) of rust

## less then operator sometime need () but when ?

```rust
// Now now!
if (i as u8) < j {
    println!("i is less than  j => True");
} else {
    println!("i is less than  j => False");
}

// *** Now need () ***
//
// without () error
// in this context, < is treated as
//             - interpreted as generic arguments
//            ^
/*
if i as u8 < j {
    println!("i is less than  j => True");
} else {
    println!("i is less than  j => False");
}
*/
```

## how and on what `.iter()` method works ?

to iterate array or vector or maybe slice also, who knows
use case can be,

1. to iterate a vector
2. to lterate a array
3. to iterate through a `HashSet` etc `std::collections::*` probably

```rust
// 1. vector
let vec = vec![1, 2, 3, 4, 5];
for i in vec.iter() {
    println!("{}", i);
}

// 2. array
let arr = [0; 10];
for num in arr.iter() {
    println!("{num}")
}
```

## is `iter()` method available in String ?, if not how to iterate string ?

!! not really,

```rust
let s = "123456789".to_string();

// to iterate string
let s_chars = s.chars();
```

## how to copy string ?

```rust
let s1 = String::from("hello");
let mut s2 = s1.clone();

// no relation with father-child :)
s2 = "changed_value".to_string();

// I/O
println!("s1: {}", s1); // okey
println!("s2: {}", s2); // okey ++
```

## how to convert array to HashSet or Vector ?

```rust
// 1 -  Import HashSet
use std::collections::HashSet;

fn main() {
    // let arr = [1; 10]; // HashSet - set - so only unique value
    let arr = [1, 2, 3, 4, 5]; // target array

    // copy to a vector
    // let  cloned_arr = arr.iter().cloned().collect::<Vec<i32>>();

    // copy to a HashSet
    let cloned_arr = arr.iter().cloned().collect::<HashSet<i32>>();


    // iterate HashSet with .iter() method
    for v in cloned_arr.iter() {
        println!("v = {v}");
    }

    // alternative way to call
    let cloned_again: HashSet<i32> = arr.iter().cloned().collect();
    for v in cloned_again.iter() {
        println!("v = {v}");
    }

    // basic use of set!
    println!("1 = {}", cloned_arr.contains(&1));
    println!("4 = {}", cloned_arr.contains(&4));
    println!("9 = {}", cloned_arr.contains(&9));
    println!("10 = {}", cloned_arr.contains(&10));
}
```

## hwo to create HashSet from immdiate values ?

```rust
let vowels: HashSet<char> = ['a', 'e', 'i', 'o', 'u'].iter().cloned().collect();
```
