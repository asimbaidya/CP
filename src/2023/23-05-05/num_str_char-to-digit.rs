fn main() {
    // ch.to_digit
    // 9 - 9 (radix=10)
    // A - 10(radic=16)
    let ch = 'A';
    let num = ch.to_digit(16).unwrap();
    println!("{}", num);
    // 15

    let x = ch.to_ascii_lowercase();
    println!("{x:?} - x");

    let a = "ABCDEabcde0123456789";
    for c in a.chars() {
        // println!("{:?}", c.to_digit(10));
        println!("{:?}", c as u8);
    }

    // parse() "3234" _> 3234
    let num_str = "3234";
    let num: i32 = num_str.parse().unwrap();
    println!("{}", num_str);
    println!("{}", num * 32);
}
