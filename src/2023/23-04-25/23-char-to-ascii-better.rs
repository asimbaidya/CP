use std::io::{self, BufRead};

fn main() {
    let stdin = io::stdin();
    let mut lines = stdin.lock().lines().map(Result::unwrap);

    let num_tests: usize = lines.next().unwrap().parse().unwrap();

    for line in lines.take(num_tests) {
        //> (1)
        let positions = line.chars().map(|c| c as u8 - b'A' + 1);
        println!(
            "{}",
            positions
                .map(|p| p.to_string())
                .collect::<Vec<_>>()
                .join(" ")
        );

        //> (2)
        let res = line
            .chars()
            .map(|c| c as u8 - b'A' + 1)
            .map(|c| c.to_string())
            .collect::<Vec<_>>()
            .join(" ");
        println!("{res}");

        //> (2) but, wtf if <_> ?
        // _ is short for `String` because  type  of vector is knon as to_string() return String
        let res = line
            .chars()
            .map(|c| c as u8 - b'A' + 1)
            .map(|c| c.to_string())
            .collect::<Vec<String>>()
            .join(" ");
        println!("{res}");
    }
}
