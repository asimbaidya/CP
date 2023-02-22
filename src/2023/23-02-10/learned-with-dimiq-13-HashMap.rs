fn main() {
    use std::collections::HashMap;

    let mut scores = HashMap::new();
    scores.insert(String::from("Blue"), 10);

    println!("{:?}", scores);

    scores.entry(String::from("Yellow")).or_insert(50);
    scores.entry(String::from("Blue")).or_insert(50);

    println!("{:?}", scores);

    if scores.contains_key("Bluee") {
        println!("F YEAH!")
    } else {
        println!("HalaLuiYAAA!")
    }
}
