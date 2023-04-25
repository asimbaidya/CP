fn main() {
    let a = b'A';
    println!("a = {a}");

    //
    let a = b"ABCDEFGHIJK";
    println!("a = {a:?}");

    //
    a.iter().for_each(|x| println!("{x}"));
}
