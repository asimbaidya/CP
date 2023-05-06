use std::io;

fn main() {
    let mut input = String::new();
    io::stdin().read_line(&mut input).unwrap();

    let values: Vec<i32> = input
        .split_whitespace()
        .map(|x| x.parse().unwrap())
        .collect();

    // any alternative syntax(concise) than below line?
    // also explain how this working
    let [a, b, c, d, e] = <[i32; 5]>::try_from(values).expect("Somethign UP re bap!");

    println!("a = {}, b = {}, c = {}, d = {}, e = {}", a, b, c, d, e);
}
