// to avoid warnings
#![allow(dead_code)]
#![allow(unused)]
#![allow(unused_imports)]

use std::io;
// day 2

fn main() {
    /// input:1
    let mut buf = String::new();

    // let line_len = io::stdin().read_line(&mut buf).unwrap(); // usize
    let result = io::stdin().read_line(&mut buf); // Result<usize, Error>

    let count = buf.trim().parse::<usize>().unwrap();

    for _ in 1..=count {
        /// input:2
        let mut buf = String::new();
        io::stdin().read_line(&mut buf).unwrap();

        let width = buf.trim().parse::<i32>().unwrap();

        // printing pattern
        for _ in 1..=width {
            for _ in 1..=width {
                print!("*");
            }
            print!("\n");
        }
    }
}
