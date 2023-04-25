use std::io::BufRead;

fn main() {
    let mut lines = std::io::stdin()
        .lock()
        .lines()
        .map(|line| line.expect("Errro"));

    let test: usize = lines.next().unwrap().parse().unwrap();

    for _ in 1..=test {
        // input_string ->  [A-Z]
        let input_string = lines.next().unwrap();

        //>(1)
        // A - 65
        // 65 - 64 => 1
        input_string
            .chars()
            .for_each(|x| print!("{}", (x as u8) - 64));
        println!();

        //>(2) //
        input_string.chars().for_each(|c| {
            if (c as u8) < b'A' || (c as u8) > b'Z' {
                panic!("Invalid Input!");
            }
            let alpha_pos = c as u8 - b'A' + 1;
            print!("{alpha_pos}");
        })
    }
}
