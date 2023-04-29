use std::io::{stdin, BufRead};

fn main() {
    let mut lines = stdin()
        .lock()
        .lines()
        .map(|line| line.expect("Could not read line"));

    let test_count: usize = lines.next().unwrap().parse().unwrap();

    for _ in 0..test_count {
        let line = lines.next().unwrap();

        // getting total digit & the number from line
        let p: u32 = line.len() as u32;
        let num: u32 = line.parse().unwrap();

        // println!("total digit = {p}");

        // iterate through each char
        // convert each char to digit
        //  raise power p to each converte digit
        // adds up all pow(n,p)
        let digit_power_sum: u32 = line.chars().map(|n| n.to_digit(10).unwrap().pow(p)).sum();

        // output
        if digit_power_sum == num {
            println!("{num} is an armstrong number!");
        } else {
            println!("{num} is not an armstrong number!");
        }
    }
}
