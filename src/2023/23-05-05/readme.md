# codes

## 29-char-identification.rs

```rust
use std::io::stdin;

fn main() {
    let mut lines = stdin().lines().map(|line| line.unwrap());

    let test: usize = lines.next().unwrap().parse().unwrap();

    for _ in 1..=test {
        // in each line, only one single char should be given as input, else panic!
        let ch: char = lines.next().unwrap().parse().unwrap();

        // wow
        if ch.is_lowercase() {
            println!("Lowercase Character")
        } else if ch.is_ascii_uppercase() {
            println!("Uppercase Character")
        } else if ch.is_numeric() {
            println!("Numerical Digit")
        } else {
            println!("Special Character")
        }

        //
        let ascii = ch as u32;
        // println!("ascii = {ascii:?}");

        // Ouch! runtiem value can not be used in pattern!
        // let zero = '0' as u32;
        // let nine = '9' as u32;
        // let A = 'A' as u32;
        // let Z = 'A' as u32;
        // let a = 'a' as u32;
        // let z = 'z' as u32;

        match ascii {
            48..=57 => println!("Numerical Digit"),
            65..=90 => println!("Uppercase Character"),
            97..=122 => println!("Lowercase Character"),
            _ => println!("Special Character"),
        }
    }
    let data = "AZaz09";
    data.chars().for_each(|x| println!("{x} = {}", x as u32));
}
```

## 30-perfect-number.rs

```rust
#![allow(unused)]
#![allow(dead_code)]

use std::io::stdin;

fn main() {
    let mut lines = stdin().lines().map(|l| l.unwrap());

    let test_case: usize = lines.next().unwrap().parse().unwrap();

    for _ in 0..test_case {
        let nums = lines.next().unwrap().split_whitespace().for_each(|x| {
            let num: u32 = x.parse().unwrap();
            // println!("num = {num}"); // okey

            let sum = get_divisor_sum(num);
            // println!("num = {num}, sum = {sum}");

            // output
            if is_perfect(num, sum) {
                println!("YES, {num} is a perfect number!");
            } else {
                println!("No, {num} is not a perfect number!");
            }
        });
    }
}

fn get_divisor_sum(n: u32) -> u32 {
    let mut i: u32 = 1;
    // let cap: u32 = (n as f32 / 2.0).ceil() as u32;
    let mut sum = 0;
    while i <= (n as f32 / 2.0).ceil() as u32 && i < n {
        if n  0 == 0 {
            sum += i;
        }
        i += 1;
    }
    sum
}
fn is_perfect(n: u32, m: u32) -> bool {
    n == m
}
```

## 31-perfect-number-in-range-faster.rs

```rust
#![allow(unused)]
#![allow(dead_code)]

use std::io::stdin;

// FIX: check if I did too many(unnecessary) as u32

fn main() {
    let mut lines = stdin().lines().map(|l| l.unwrap());

    let _test_case: usize = lines.next().unwrap().parse().unwrap();

    let nums = lines.next().unwrap().split_whitespace().for_each(|x| {
        let limit: u64 = x.parse().unwrap();

        for p in 1..limit {
            let maybe_prime = 2_u64.pow(p as u32) - 1;

            // if not int the limit, we can exit
            if maybe_prime > limit {
                println!("break at p = {p}");
                break;
            }

            if is_prime(maybe_prime) {
                let perfect_num = (2_u64.pow((p - 1) as u32)) * maybe_prime;
                println!("{perfect_num}");
            }
        }
    });
}

fn is_prime(n: u64) -> bool {
    if n < 2 {
        return false;
    }
    let max_divisor = (n as f64).sqrt() as u64 + 1;
    for d in 2..max_divisor {
        if n  0 == 0 {
            return false;
        }
    }
    true
}
```

## 31-perfect-number-in-range.rs

```rust
#![allow(unused)]
#![allow(dead_code)]

use std::io::stdin;

fn main() {
    let mut lines = stdin().lines().map(|l| l.unwrap());

    let _test_case: usize = lines.next().unwrap().parse().unwrap();

    let nums = lines.next().unwrap().split_whitespace().for_each(|x| {
        let num: u32 = x.parse().unwrap();

        for i in 1..num {
            let sum = get_divisor_sum(i);
            if is_perfect(i, sum) {
                println!("{i}");
            }
        }
    });
}

fn get_divisor_sum(n: u32) -> u32 {
    if n == 1 {
        return 0;
    }
    let mut i: u32 = 1;
    // let cap: u32 = (n as f32 / 2.0).ceil() as u32;
    let mut sum = 0;
    while i <= (n as f32 / 2.0).ceil() as u32 && i < n {
        if n  0 == 0 {
            sum += i;
        }
        i += 1;
    }
    sum
}
fn is_perfect(n: u32, m: u32) -> bool {
    n == m
}
```

## is_prime_check.rs

```rust
fn is_prime(n: u64) -> bool {
    if n < 2 {
        return false;
    }
    let max_divisor = (n as f64).sqrt() as u64 + 1;
    for d in 2..max_divisor {
        if n  0 == 0 {
            return false;
        }
    }
    true
}

fn main() {
    let mut prime_count = 0;

    for i in 1..=1000_000 {
        if is_prime(i) {
            // println!("{i} = {}", true);
            prime_count += 1;
        }
    }

    println!("{prime_count} primes found in whatever range youprovided!");
}
```

## mersenne-prime-check.rs

```rust
fn main() {
    for p in 1..=60 {
        println!("2^{p} - 1 = {}", 2_u64.pow(p) - 1)
    }
}
```

## num_str_char-to-digit.rs

```rust
fn main() {
    // ch.to_digit
    // 9 - 9 (radix=10)
    // A - 10(radic=16)
    let ch = 'A';
    let num = ch.to_digit(16).unwrap();
    println!("{}", num);
    // 15

    let x = ch.to_ascii_lowercase();
    println!("{x:?} - x");

    let a = "ABCDEabcde0123456789";
    for c in a.chars() {
        // println!("{:?}", c.to_digit(10));
        println!("{:?}", c as u8);
    }

    // parse() "3234" _> 3234
    let num_str = "3234";
    let num: i32 = num_str.parse().unwrap();
    println!("{}", num_str);
    println!("{}", num * 32);
}
```

## num_str_conversion.rs

```rust
fn main() {
    // hex string to numeric
    let hex_string = "3234F2";
    let number = i64::from_str_radix(&hex_string, 16).unwrap();
    println!("{number}");

    let hex_string = "3234F2";
    let number = u64::from_str_radix(&hex_string, 16).unwrap();
    println!("{number}");

    let hex_string = "3234F2";
    let number = i32::from_str_radix(hex_string, 16).unwrap();
    println!("{number}");

    let hex_string = "3234F2";
    let number = u32::from_str_radix(hex_string, 16).unwrap();
    println!("{number}");
}
```

## num_str_emoji-as-i32.rs

```rust
fn main() {
    let fire = '🔥';

    //
    println!("fire = {}", fire);
    println!("fire = {}", fire as i32);
    // char::from_32(u32) // only method,so any unicode or what ever type,
    // first  need  to convert  into u32
    println!("{:?}", char::from_u32(fire as u32).unwrap());

    // char::from_digit(u32,_);
    let c = char::from_digit(fire as u32, 10);
    println!("c = {c:?}");

    let c = char::from_digit(9, 10);
    println!("c = {c:?}");
    let c = char::from_digit('A' as u32, 10);
    println!("c = {c:?}");

    // error
    // println!("{:?}", String::from_u32(fire as u32).unwrap());
}
```

## prime-count-in-range.rs

```rust
fn count_primes(n: usize) -> usize {
    let mut primes = vec![true; n + 1];
    let mut count = 0;

    for i in 2..=n {
        if primes[i] {
            count += 1;
            let mut j = i * i;
            while j <= n {
                primes[j] = false;
                j += i;
            }
        }
    }

    count
}
fn count_primes_appx(n: usize) -> usize {
    (n as f64 / (n as f64).ln()) as usize
}

fn main() {
    let result = count_primes(1000_000);
    println!("result = {result}");

    let result = count_primes_appx(1000_000);
    println!("result = {result}");

    // ch.to_digit
    // 9 - 9 (radix=10)
    // A - 10(radic=16)
    let ch = 'A';
    let num = ch.to_digit(16).unwrap();
    println!("{}", num);
    // 15

    let x = ch.to_ascii_lowercase();
    println!("{x:?} - x");

    let a = "ABCDEabcde0123456789";
    for c in a.chars() {
        // println!("{:?}", c.to_digit(10));
        println!("{:?}", c as u8);
    }

    // parse() "3234" _> 3234
    let num_str = "3234";
    let num: i32 = num_str.parse().unwrap();
    println!("{}", num_str);
    println!("{}", num * 32);
}
```
