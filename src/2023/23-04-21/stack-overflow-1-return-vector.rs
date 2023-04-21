// return pi :)

fn get_vec(len: usize) -> Vec<f64> {
    vec![3.1416; len]
}

fn main() {
    let generated_vec = get_vec(10);
    println!("{:?}", generated_vec);
}
