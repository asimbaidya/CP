// yo cool
// AC

fn fact(n: u128) -> u128 {
    if n == 0 {
        return 1;
    }
    return fact(n - 1) * n;
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
        println!("fact({}) = {}", num, fact(num));
    }
}
