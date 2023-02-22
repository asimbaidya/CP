fn main() {
    let mut buf = String::new();

    std::io::stdin()
        .read_line(&mut buf)
        .expect("Could not read input!");

    // one: using explicit type for parsing
    let count: usize = buf.trim().parse().unwrap();

    // two: using <type>
    let count = buf.trim().parse::<usize>().unwrap();

    for _ in 1..=count {
        let mut buf = String::new();

        std::io::stdin().read_line(&mut buf);

        let mut nums = buf.trim().chars();

        let first = nums.nth(0).unwrap().to_digit(10).unwrap();
        let last = nums.last().unwrap().to_digit(10).unwrap();

        println!("Sum = {}", first + last);
    }
}
