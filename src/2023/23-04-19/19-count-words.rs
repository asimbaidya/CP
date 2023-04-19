use std::io::{self, BufRead};

fn main() {
    // reader
    let stdin = io::stdin();
    let mut lines = stdin.lock().lines().map(|line| line.unwrap());

    // test_case
    let test_case: usize = lines.next().unwrap().parse().unwrap();

    // iterate and do the work
    for _ in 0..test_case {
        let input = lines.next().unwrap();
        let count = input.split_whitespace().count();
        println!("Count = {count}");
    }
    // double dang!
    for _ in 0..test_case {
        let input = lines.next().unwrap();
        let count = input.split_whitespace().count();
        println!("Count = {count}");
    }
}
