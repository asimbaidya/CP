use std::io::{self, BufRead};

fn main() {
    let stdin = io::stdin();
    let mut lines = stdin
        .lock()
        .lines()
        .map(|line| line.expect("error reading line"));

    // true
    let mut line_num = 1;
    while let Some(line) = lines.next() {
        println!("{line_num:02} | {line}");
        line_num += 1;
    }
}
