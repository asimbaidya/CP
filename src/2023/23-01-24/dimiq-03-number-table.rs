fn main() {
    // reverse iteration!! cool, but not coller than python :(
    for i in (1..=1000).rev() {
        if i == 1000 {
            // do nothing
        } else if i % 5 == 0 {
            print!("\n")
        } else {
            print!("\t")
        }
        print!("{i}");
    }
}
