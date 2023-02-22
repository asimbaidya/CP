//

fn main() {
    // String !! not string
    let mut buf = String::new();

    std::io::stdin()
        .read_line(&mut buf)
        .expect("Could not read input!");

    let test: usize = buf.trim().parse().unwrap();

    for _ in 1..=test {
        let mut buf = String::new();
        std::io::stdin()
            .read_line(&mut buf)
            .expect("Could not read input!");

        let num: u64 = buf.trim().parse().unwrap();
        let sqrt: u64 = (num as f64).sqrt() as u64;

        // println!("sqrt {sqrt} for num {num}");

        if sqrt * sqrt == num {
            println!("Yes")
        } else {
            println!("NO")
        }
    }
}
