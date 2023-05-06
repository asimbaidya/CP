use std::convert::TryFrom;

fn main() {
    // converting a vec<i32> to an array of i32 with a length of 5:
    let v = vec![1, 2, 3, 4, 5];
    let a: [i32; 5] = <[i32; 5]>::try_from(v).unwrap();
    println!("a = {a:?}");

    // string to byte
    let s = String::from("hello world");
    let v: Vec<u8> = Vec::try_from(s.into_bytes()).unwrap();
    println!("v = {v:?}");

    // u8 to bool
    let n = 32u8;
    let b: bool = n != 0;
    println!("b = {b}");

    let n = 0u8;
    let b: bool = n != 0;
    println!("b = {b}");

    // ouch! above is suggested!
    // let n = 32u8;
    // let b = n as bool;
    // println!("b = {b}");
}
