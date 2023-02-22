fn main() {
    let mut buf = String::new();

    std::io::stdin()
        .read_line(&mut buf)
        .expect("Don't use me! but somethign up witn stdin");
}
