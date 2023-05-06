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
        if n % d == 0 {
            return false;
        }
    }
    true
}
