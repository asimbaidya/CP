use std::io::{self, BufRead};

fn main() {
    let mut lines = io::stdin()
        .lock()
        .lines()
        .map(|line| line.expect("🟥 Invalid input from stdin!"));

    let line = lines.next();
    println!("line = {line:?}");
}
