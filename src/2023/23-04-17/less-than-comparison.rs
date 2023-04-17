fn main() {
    let i: i32 = 32;
    let j: u8 = 31;

    if i < j as i32 {
        println!("i is less than  j => True");
    } else {
        println!("i is less than  j => False");
    }

    if (i as u8) < j {
        println!("i is less than  j => True");
    } else {
        println!("i is less than  j => False");
    }
    // without () error

    // in this context, < is treated as
    //             interpreted as generic arguments
    //            ^
    // if i as u8 < j{
    //     println!("i is less than  j => True");
    // } else {
    //     println!("i is less than  j => False");
    // }
}
