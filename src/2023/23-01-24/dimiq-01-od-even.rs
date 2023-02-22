use std::io;
// learnign rust by doing
// day 1

fn main() {
    let mut buf = String::new();

    // read 1 line
    io::stdin().read_line(&mut buf).unwrap();

    // convert the line to a usize, input line must be a valid uzie
    let count = buf.trim().parse::<usize>().unwrap();

    for _ in 1..=count {
        let mut buf = String::new();

        // again read line
        io::stdin().read_line(&mut buf).unwrap();

        // nwo convert into i64 & line must be a valid i64 otherwise program will panic
        let num = buf.trim().parse::<i64>().unwrap();

        // check if odd or even
        if num % 2 == 0 {
            println!("even");
        } else {
            println!("odd");
        }
    }
    println!("buf: {}", buf);
}
