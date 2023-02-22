fn zero_count_at_end(n: u128) -> u128 {
    // 35! = 103331479663861449296666513375232_00_000_000
    //  works with 35!
    let mut result = 0;
    let mut fact: u128 = 1; // default

    for i in 1..=n {
        fact *= i;

        while fact % 10 == 0 {
            result += 1;
            fact /= 10;
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
