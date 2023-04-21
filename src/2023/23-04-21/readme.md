# lost in prime hell

> way to handles prime related stuff in rust

## 21-reverse-input.rs

```rust
use std::io::*;

fn main() {
    let mut lines = stdin().lock().lines();

    // :( - not the the best approach!
    let num_of_input: usize = lines.next().unwrap().unwrap().parse().unwrap();

    for _ in 0..num_of_input {
        // :) not a great way to take iniput, but does reverse effectively
        let input = lines
            .next()
            .unwrap()
            .unwrap()
            .chars()
            .rev()
            .collect::<String>();

        println!("{input}");
    }
}
```

## 22-prime-count-in-range.rs

```rust
// approach: seive of prime  on b_max & then return prime count for each input range (a,b)

use std::io::*;

fn get_is_prime(b: usize) -> Vec<bool> {
    // create a local vector of size (b+1)
    let mut is_prime = vec![true; b + 1];

    is_prime[0] = false;
    is_prime[1] = false;

    let cap = ((b as f64).sqrt() + 1.0) as usize;

    for i in 2..=cap {
        if is_prime[i as usize] {
            let i2 = i.pow(2);
            for j in (i2..=b).step_by(i.try_into().unwrap()) {
                is_prime[j as usize] = false;
            }
        }
    }

    return is_prime;
}

fn main() {
    let is_prime = get_is_prime(1000_000);

    // yeh!
    let mut lines = stdin().lock().lines();
    let num_of_input: usize = lines.next().unwrap().unwrap().parse().unwrap();

    for _ in 0..num_of_input {
        let line = lines.next().unwrap().unwrap();
        let mut iter = line.split_whitespace();
        let a: i32 = iter.next().unwrap().parse().unwrap();
        let b: i32 = iter.next().unwrap().parse().unwrap();

        //
        let mut count = 0;
        for i in a..=b {
            if is_prime[i as usize] {
                count += 1;
            }
        }
        println!("count = {count}");
    }

    // in 1..100k - 9,592 -> okey
    // in 1..1m - 78,498 -> okey
}
```

## 22-prime-count-in-range-simple.rs

```rust
// approach: seive of prime  on b_max & then return prime count for each input range (a,b)

use std::io::*;

fn get_is_prime(b: usize) -> Vec<bool> {
    // create a local vector of size (b+1)
    let mut is_prime = vec![true; b + 1];

    is_prime[0] = false;
    is_prime[1] = false;

    let cap = ((b as f64).sqrt() + 1.0) as usize;

    for i in 2..=cap {
        if is_prime[i] {
            let mut j = i * i;
            while j <= b {
                is_prime[j] = false;
                j += i;
            }
        }
    }

    return is_prime;
}

fn _get_is_prime(b: usize) -> Vec<bool> {
    // create a local vector of size (b+1)
    let mut is_prime = vec![true; b + 1];

    is_prime[0] = false;
    is_prime[1] = false;

    let cap = ((b as f64).sqrt() + 1.0) as usize;

    for i in 2..=cap {
        if is_prime[i as usize] {
            let i2 = i.pow(2);
            for j in (i2..=b).step_by(i.try_into().unwrap()) {
                is_prime[j as usize] = false;
            }
        }
    }

    return is_prime;
}

fn main() {
    let is_prime = get_is_prime(1000_000);

    // yeh!
    let mut lines = stdin().lock().lines();
    let num_of_input: usize = lines.next().unwrap().unwrap().parse().unwrap();

    for _ in 0..num_of_input {
        let line = lines.next().unwrap().unwrap();
        let mut iter = line.split_whitespace();
        let a: i32 = iter.next().unwrap().parse().unwrap();
        let b: i32 = iter.next().unwrap().parse().unwrap();

        //
        let mut count = 0;
        for i in a..=b {
            if is_prime[i as usize] {
                count += 1;
            }
        }
        println!("count = {count}");
    }

    // in 1..100k - 9,592 -> okey
    // in 1..1m - 78,498 -> okey
}
```

## fn_return_primitive.rs

```rust
fn add(i: i32, j: i32) -> i32 {
    i + j
}
fn main() {
    println!("3+2 = {}", add(2, 3));
}
```

## sieve-00.rs

```rust
fn sieve_of_eratosthenes(n: usize) -> Vec<bool> {
    let mut primes = vec![true; n + 1];
    primes[0] = false; // 0 is not prime
    primes[1] = false; // 1 is not prime

    let mut p = 2;
    while p * p <= n {
        if primes[p] {
            mark_multiples(&mut primes, p);
        }
        p += 1;
    }

    primes
}

fn mark_multiples(primes: &mut [bool], prime: usize) {
    let mut multiple = prime * prime;
    while multiple < primes.len() {
        primes[multiple] = false;
        multiple += prime;
    }
}

fn main() {
    let primes = sieve_of_eratosthenes(10);
    println!("primes = {primes:?}");
}
```

## sieve-01.rs

```rust
// scraped from web

fn sieve_of_eratosthenes(n: usize) -> Vec<usize> {
    let mut is_prime = vec![true; n + 1];

    is_prime[0] = false;
    is_prime[1] = false;

    for i in 2..=(n as f64).sqrt() as usize {
        if is_prime[i] {
            let mut j = i * i;
            while j <= n {
                is_prime[j] = false;
                j += i;
            }
        }
    }

    (0..=n).filter(|&x| is_prime[x]).collect()
}

fn main() {
    let primes = sieve_of_eratosthenes(1000);
    // println!("primes = {primes:?}");
    println!("count = {}", primes.len()); // okey

    let primes = sieve_of_eratosthenes(100_000);
    // println!("primes = {primes:?}");
    println!("count = {}", primes.len()); // okey

    let primes = sieve_of_eratosthenes(1000_000);
    // println!("primes = {primes:?}");
    println!("count = {}", primes.len()); // okey
}
```

## stack-overflow-1-return-vector.rs

```rust
// return pi :)

fn get_vec(len: usize) -> Vec<f64> {
    vec![3.1416; len]
}

fn main() {
    let generated_vec = get_vec(10);
    println!("{:?}", generated_vec);
}
```

## stack-overflow-2-return-const-array.rs

```rust
// wow! constant size matter

fn generate_array<const LEN: usize>() -> [f64; LEN] {
    let arr = [3.1416; LEN];
    // ...(add mut if want to chage arr)
    arr
}
fn main() {
    let generated_array1: [f64; 5] = generate_array();
    println!("{:?}", generated_array1);

    let generated_array2: [f64; 10] = generate_array();
    println!("{:?}", generated_array2);
}
```

## stack-overflow-3-alean-stuff-Box.rs

```rust
// return array, with Box ... alean stuff for me now!

fn generate_array(len: usize) -> Box<[f64]> {
    let vec = vec![3.1415; len];
    // ...
    vec.into_boxed_slice()
}

fn main() {
    let n = 30;
    let generated_array = generate_array(n);
    println!("{:?}", generated_array);
}
```
