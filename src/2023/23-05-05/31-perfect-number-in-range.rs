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
        if n % i == 0 {
            sum += i;
        }
        i += 1;
    }
    sum
}
fn is_perfect(n: u32, m: u32) -> bool {
    n == m
}
