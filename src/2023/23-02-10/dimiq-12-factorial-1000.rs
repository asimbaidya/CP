fn zero_count_at_end(n: u128) -> u128 {
    // WARN: better solution exist!
    let mut result = 0;

    for i in 1..=n {
        let mut num = i;
        while num % 5 == 0 {
            // println!("{}", i);
            // for 25, this line will get printed twice
            // for 75, ||
            // for 125, this line will get printed 3 time
            num /= 5;
            result += 1;
        }
    }
    return result;
}

fn main() {
    let mut buf = String::new();
    std::io::stdin()
        .read_line(&mut buf)
        .expect("Could not read line");

    let total_test: usize = buf.trim().parse().unwrap();

    for _ in 0..total_test {
        let mut buf = String::new();
        std::io::stdin()
            .read_line(&mut buf)
            .expect("Could not read line");

        let num: u128 = buf.trim().parse().unwrap();
        println!("fact({}) = {}", num, zero_count_at_end(num));
    }
}
