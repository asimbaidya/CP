# CSE341 & ECO101 xm

## 32-multiple-of-i-in-range-x-to-n.rs

```rust
use std::io::stdin;

fn main() {
    let mut lines = stdin().lines().map(|line| line.unwrap());

    let test_num: usize = lines.next().unwrap().parse().unwrap();

    for _ in 0..test_num {
        let nums = lines
            .next()
            .unwrap()
            .split_whitespace()
            .map(|x| x.parse::<i32>().expect("Could not parse"))
            .collect::<Vec<_>>();

        // let [x, n] = <[i32; 3]>::try_from(nums).expect("Mis-Match!");
        let [x, n, i] = <[i32; 3]>::try_from(nums).expect("Mis-Match!").clone();

        if x > n {
            println!("Invalid!");
        } else {
            // any better & clear approach to get this value?
            let offset = x  0;
            let start = if offset == 0 { x } else { x + (i - offset) };

            // much better
            let start = (x + i - 1) / i * i;

            for k in (start..=n).step_by(i as usize) {
                println!("{k}");
            }
            println!();
        }
    }
}
```

## 32-multiple-of-x-until-n.rs

```rust
use std::io::stdin;

fn main() {
    let mut lines = stdin().lines().map(|line| line.unwrap());

    let test_num: usize = lines.next().unwrap().parse().unwrap();

    for _ in 0..test_num {
        let nums = lines
            .next()
            .unwrap()
            .split_whitespace()
            .map(|x| x.parse::<i32>().expect("Could not parse"))
            .collect::<Vec<_>>();

        // let [x, n] = <[i32; 2]>::try_from(nums).expect("Mis-Match!");
        let [x, n] = <[i32; 2]>::try_from(nums).expect("Mis-Match!").clone();

        if x > n {
            println!("Invalid!");
        } else {
            for i in (x..=n).step_by(x as usize) {
                println!("{i}");
            }
        }
    }
}
```

## next-multiple-of-i-after-x.rs

````rust
fn f1(x: u32, i: u32) -> u32 {
    (x as f32 / i as f32).ceil() as u32 * i
}
fn f2(x: u32, i: u32) -> u32 {
    (x + i - 1) / i * i
}
fn main() {
    let x = 56;
    let i = 5;

    // 7-> 5*7 => 35

    // one
    println!("x = {x}, i = {i}");
    let r1 = x as f32 / i as f32;
    println!("r1 = {r1}");
    let r1 = r1.ceil();
    println!("r1 = {r1}");
    let r1 = r1 as u32 * i;
    println!("r1 = {r1}");

    // two
    let r2 = (x + i - 1) / i * i;
    println!("r2 = {r2}");

    // first method is same as second method!!, just it uses floot instead of ceil!
    // other than that everything works in same way!

    let r3 = (x as f32 / i as f32).floor() as u32;
    // now r3 is quotinet, of `x/i`
    println!("r3 = {r3}");
    let r3 = r3 * i;
    // now r3 is multiple of i that is less than or eq x
    println!("r3 = {r3}");
    let r3 = r3 + i;
    // not there is a problem, like r3 might be first or second multiple
    // that is greater than or equal x
    println!("r3 = {r3}");
    // so to make sure r3 is only first multiple, we added (i-1) which helped in some way!

    // fn call
    println!("result = {}", f1(x, i));
    println!("result = {}", f2(x, i));

    // for i in 1..100 {
    //     let x = i ## try-from.rs

```rust
use std::convert::TryFrom;

fn main() {
    // converting a vec<i32> to an array of i32 with a length of 5:
    let v = vec![1, 2, 3, 4, 5];
    let a: [i32; 5] = <[i32; 5]>::try_from(v).unwrap();
    println!("a = {a:?}");

    // string to byte
    let s = String::from("hello world");
    let v: Vec<u8> = Vec::try_from(s.into_bytes()).unwrap();
    println!("v = {v:?}");

    // u8 to bool
    let n = 32u8;
    let b: bool = n != 0;
    println!("b = {b}");

    let n = 0u8;
    let b: bool = n != 0;
    println!("b = {b}");

    // ouch! above is suggested!
    // let n = 32u8;
    // let b = n as bool;
    // println!("b = {b}");
}
````

## unpack.rs

```rust
use std::io;

fn main() {
    let mut input = String::new();
    io::stdin().read_line(&mut input).unwrap();

    let values: Vec<i32> = input
        .split_whitespace()
        .map(|x| x.parse().unwrap())
        .collect();

    // any alternative syntax(concise) than below line?
    // also explain how this working
    let [a, b, c, d, e] = <[i32; 5]>::try_from(values).expect("Somethign UP re bap!");

    println!("a = {}, b = {}, c = {}, d = {}, e = {}", a, b, c, d, e);
}
```
