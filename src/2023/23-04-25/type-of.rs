use std::any::type_name;

fn type_of<T>(_: T) -> () {
    println!("Type = {}", type_name::<T>());
}
fn main() {
    let x = 21;
    let y = 2.5;
    type_of(&y);
    type_of(x);
    type_of(&main);
    type_of(main);
    type_of(&{ || "HI" });
    type_of(b'A');
    type_of(65 as u8);
    type_of(b"A");
}
