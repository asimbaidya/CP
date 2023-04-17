fn main() {
    let s1 = String::from("hello");
    let mut s2 = s1.clone(); // Create a deep copy of s1 using .clone() method

    s2 = "changed_value".to_string();

    println!("s1: {}", s1); // s1 is still accessible after cloning
    println!("s2: {}", s2); // s2 is an independent copy of s1
}
