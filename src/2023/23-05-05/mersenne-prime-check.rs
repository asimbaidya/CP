fn main() {
    for p in 1..=60 {
        println!("2^{p} - 1 = {}", 2_u64.pow(p) - 1)
    }
}
