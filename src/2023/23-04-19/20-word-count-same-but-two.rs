use std::io::{self, BufRead};
fn main() {
    // reader *better* approachto read lines
    let stdin = io::stdin();
    let mut lines = stdin
        .lock()
        .lines()
        .map(|line| line.expect("error reading line"));

    //  lines() return a return a iterator that will read from stdin until input stops ?

    // todo
    // unwrap vs expect

    // test_case
    let test_case: usize = lines.next().unwrap().parse().unwrap();
    for (_, input) in lines.take(test_case).enumerate() {
        let count = get_word_count(&input);
        println!("Count = {}", count);
    }

    // // error because .takes() `takes` the owener ship of lines
    // // one way to solve is.. create line again
    // for (i, input) in lines.take(test_case).enumerate() {
    //     println!("hello world");
    //     let count = get_word_count(&input);
    //     println!("Count {}: {}", i + 1, count);
    // }
}

fn get_word_count(input: &str) -> usize {
    input.split_whitespace().count()
}
