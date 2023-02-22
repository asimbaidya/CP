// AC on Feb-05-2023
fn main() {
    let mut buf = String::new();

    std::io::stdin().read_line(&mut buf);
    let count: usize = buf.trim().parse().unwrap();

    for _ in 1..=count {
        let mut buf = String::new();

        std::io::stdin().read_line(&mut buf);

        let total_nums: usize = buf.trim().split(" ").collect::<Vec<&str>>().len();
        println!("{}", total_nums)
    }
}
