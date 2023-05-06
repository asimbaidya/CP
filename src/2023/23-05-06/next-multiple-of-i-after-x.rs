fn f1(x: u32, i: u32) -> u32 {
    (x as f32 / i as f32).ceil() as u32 * i
}
fn f2(x: u32, i: u32) -> u32 {
    (x + i - 1) / i * i
}
fn main() {
    let x = 56;
    let i = 5;

    // 7-> 5*7 => 35

    // one
    println!("x = {x}, i = {i}");
    let r1 = x as f32 / i as f32;
    println!("r1 = {r1}");
    let r1 = r1.ceil();
    println!("r1 = {r1}");
    let r1 = r1 as u32 * i;
    println!("r1 = {r1}");

    // two
    let r2 = (x + i - 1) / i * i;
    println!("r2 = {r2}");

    // first method is same as second method!!, just it uses floot instead of ceil!
    // other than that everything works in same way!

    let r3 = (x as f32 / i as f32).floor() as u32;
    // now r3 is quotinet, of `x/i`
    println!("r3 = {r3}");
    let r3 = r3 * i;
    // now r3 is multiple of i that is less than or eq x
    println!("r3 = {r3}");
    let r3 = r3 + i;
    // not there is a problem, like r3 might be first or second multiple
    // that is greater than or equal x
    println!("r3 = {r3}");
    // so to make sure r3 is only first multiple, we added (i-1) which helped in some way!

    // fn call
    println!("result = {}", f1(x, i));
    println!("result = {}", f2(x, i));

    // for i in 1..100 {
    //     let x = i % 23;
    //     println!("result = {}", f1(x, i));
    //     println!("result = {}", f2(x, i));
    // }
}
