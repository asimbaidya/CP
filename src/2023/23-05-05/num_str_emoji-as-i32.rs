fn main() {
    let fire = '🔥';

    //
    println!("fire = {}", fire);
    println!("fire = {}", fire as i32);
    // char::from_32(u32) // only method,so any unicode or what ever type,
    // first  need  to convert  into u32
    println!("{:?}", char::from_u32(fire as u32).unwrap());

    // char::from_digit(u32,_);
    let c = char::from_digit(fire as u32, 10);
    println!("c = {c:?}");

    let c = char::from_digit(9, 10);
    println!("c = {c:?}");
    let c = char::from_digit('A' as u32, 10);
    println!("c = {c:?}");

    // error
    // println!("{:?}", String::from_u32(fire as u32).unwrap());
}
