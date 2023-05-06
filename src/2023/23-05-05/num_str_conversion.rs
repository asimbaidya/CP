fn main() {
    // hex string to numeric
    let hex_string = "3234F2";
    let number = i64::from_str_radix(&hex_string, 16).unwrap();
    println!("{number}");

    let hex_string = "3234F2";
    let number = u64::from_str_radix(&hex_string, 16).unwrap();
    println!("{number}");

    let hex_string = "3234F2";
    let number = i32::from_str_radix(hex_string, 16).unwrap();
    println!("{number}");

    let hex_string = "3234F2";
    let number = u32::from_str_radix(hex_string, 16).unwrap();
    println!("{number}");
}
