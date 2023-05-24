use std::convert::TryInto;

fn main() {
    let mut lines = std::io::stdin().lines().map(|line| line.unwrap());

    let test_len: usize = lines.next().unwrap().parse().unwrap();

    for _ in 0..test_len {
        let nums: Vec<_> = lines
            .next()
            .unwrap()
            .split_whitespace()
            .map(|x| x.parse().unwrap())
            .collect();

        // lots  of shit
        let arr: [i32; 3] = nums.try_into().unwrap();
        let [a, b, c] = arr;
        // io  ------------------------------
        // simple
        let start = a * b;
        for i in (start..=c).step_by(start as usize) {
            println!("{i}");
        }
        println!();
    }
}
