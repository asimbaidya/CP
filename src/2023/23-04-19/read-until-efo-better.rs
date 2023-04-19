use std::io::{self, BufRead};

fn main() {
    let stdin = io::stdin();
    for line_result in stdin.lock().lines() {
        // need to learn
        match line_result {
            Ok(line) => {
                println!("{}", line);
            }
            Err(error) => {
                eprintln!("Error reading input line: {}", error);
                break;
            }
        }
    }
}
