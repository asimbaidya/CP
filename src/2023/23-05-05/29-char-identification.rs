use std::io::stdin;

fn main() {
    let mut lines = stdin().lines().map(|line| line.unwrap());

    let test: usize = lines.next().unwrap().parse().unwrap();

    for _ in 1..=test {
        // in each line, only one single char should be given as input, else panic!
        let ch: char = lines.next().unwrap().parse().unwrap();

        // wow
        if ch.is_lowercase() {
            println!("Lowercase Character")
        } else if ch.is_ascii_uppercase() {
            println!("Uppercase Character")
        } else if ch.is_numeric() {
            println!("Numerical Digit")
        } else {
            println!("Special Character")
        }

        //
        let ascii = ch as u32;
        // println!("ascii = {ascii:?}");

        // Ouch! runtiem value can not be used in pattern!
        // let zero = '0' as u32;
        // let nine = '9' as u32;
        // let A = 'A' as u32;
        // let Z = 'A' as u32;
        // let a = 'a' as u32;
        // let z = 'z' as u32;

        match ascii {
            48..=57 => println!("Numerical Digit"),
            65..=90 => println!("Uppercase Character"),
            97..=122 => println!("Lowercase Character"),
            _ => println!("Special Character"),
        }
    }
    let data = "AZaz09";
    data.chars().for_each(|x| println!("{x} = {}", x as u32));
}
