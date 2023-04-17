fn main() {
    let s = "123456789".to_string();

    println!("s = {s}");

    // s it not a fuckign iterator
    // s.count(); // so error

    // iter
    // let s_it = s.iter(); // no

    let s_chars = s.chars();
    println!("s_chars = {s_chars:?}");

    for ch in s_chars {
        println!("ch = {ch}");
    }

    // for ch in s.iter() {
    //     println!("ch = {ch}");
    // }
    // let s = String::from("hello");
    // for c in s.iter() {
    //     println!("{}", c);
    // }

    // fuckign iter method is not callable in chars

    // ------------------------------------------------------------
    // 1. vector
    let vec = vec![1, 2, 3, 4, 5];
    for i in vec.iter() {
        println!("{}", i);
    }

    // 2. array
    let arr = [0; 10];
    for num in arr.iter() {
        println!("{num}")
    }
}
