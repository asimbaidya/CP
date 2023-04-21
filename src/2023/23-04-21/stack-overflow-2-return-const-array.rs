// wow! constant size matter

fn generate_array<const LEN: usize>() -> [f64; LEN] {
    let arr = [3.1416; LEN];
    // ...(add mut if want to chage arr)
    arr
}
fn main() {
    let generated_array1: [f64; 5] = generate_array();
    println!("{:?}", generated_array1);

    let generated_array2: [f64; 10] = generate_array();
    println!("{:?}", generated_array2);
}
