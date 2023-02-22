// iterative

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

        let mut i = 0;

        while i * i <= num {
            if i * i == num {
                println!("YES");
                break;
            }

            i += 1;
        }
        if i * i > num {
            println!("No");
        }
    }
}
