use std::io::{self, BufRead};

fn main() {
    let stdin = io::stdin();
    let mut lines = stdin.lock().lines().map(Result::unwrap);

    let num_tests: usize = lines.next().unwrap().parse().unwrap();

    for line in lines.take(num_tests) {
        // line is the input taken by take :)
        println!("line = {line}");
    }

    // error!
    // lines is moved in previous call, in order touse again,
    // need redeclaration!
    // for line in lines.take(num_tests) {
    //     // line is the input taken by take :)
    //     println!("line = {line}");
    // }

    //  works, notice:  num_tests is not affected anywhere!
    let stdin = io::stdin();
    let mut lines = stdin.lock().lines().map(Result::unwrap);
    for line in lines.take(num_tests) {
        // line is the input taken by take :)
        println!("line = {line}");
    }
}
