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
