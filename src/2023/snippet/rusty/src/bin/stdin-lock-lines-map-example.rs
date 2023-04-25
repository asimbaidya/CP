use std::io::{self, BufRead};

//  try
// $ kk < a.out
// to give  invalid input

fn io_i() {
    let stdin = io::stdin();
    let mut lines = stdin.lock().lines().map(|line| line.unwrap());
    // problem
    // on invalid input! ambigious error!

    let line = lines.next();
    println!("line = {:?}", line); // Some(msg)
    println!("line = {:?}", line.unwrap()); // msg
}

fn io_ii() {
    let stdin = io::stdin();
    let mut lines = stdin.lock().lines().map(|line| {
        line.expect(
            "🔴🔴This is better, because on invalid inpput! this message  will be provided!🔴🔴",
        )
    });

    let line = lines.next();
    println!("line = {:?}", line); // Some(msg)
    println!("line = {:?}", line.unwrap()); // msg
}

fn io_iii() {
    let mut lines = io::stdin().lock().lines().map(|line| line.unwrap());

    let test_case: usize = lines.next().unwrap().parse().unwrap();

    // use of
    // .take()
    // .enumerate()
    for (i, input) in lines.take(test_case).enumerate() {
        println!("{}'th line = {}", i + 1, input);
    }
}

fn main() {
    if false {
        io_i();
        io_ii();
    } else {
        // run here
        io_iii();
    }
}
