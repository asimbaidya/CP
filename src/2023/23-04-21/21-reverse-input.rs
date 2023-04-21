use std::io::*;

fn main() {
    let mut lines = stdin().lock().lines();

    // :( - not the the best approach!
    let num_of_input: usize = lines.next().unwrap().unwrap().parse().unwrap();

    for _ in 0..num_of_input {
        // :) not a great way to take iniput, but does reverse effectively
        let input = lines
            .next()
            .unwrap()
            .unwrap()
            .chars()
            .rev()
            .collect::<String>();

        println!("{input}");
    }
}
