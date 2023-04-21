// return array, with Box ... alean stuff for me now!

fn generate_array(len: usize) -> Box<[f64]> {
    let vec = vec![3.1415; len];
    // ...
    vec.into_boxed_slice()
}

fn main() {
    let n = 30;
    let generated_array = generate_array(n);
    println!("{:?}", generated_array);
}
