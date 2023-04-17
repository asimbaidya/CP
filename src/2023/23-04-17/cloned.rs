use std::collections::HashSet;

fn main() {
    // let arr = [1; 10]; // HashSet - set - so only unique value
    let arr = [1, 2, 3, 4, 5];

    // let  cloned_arr = arr.iter().cloned().collect::<Vec<i32>>(); // copy to a vector
    let cloned_arr = arr.iter().cloned().collect::<HashSet<i32>>(); // copy to a HashSet

    for v in cloned_arr.iter() {
        println!("v = {v}");
    }

    //
    let cloned_again: HashSet<i32> = arr.iter().cloned().collect();
    for v in cloned_again.iter() {
        println!("v = {v}");
    }

    // why & ... gods know :( ... I will learn
    println!("1 = {}", cloned_arr.contains(&1));
    println!("4 = {}", cloned_arr.contains(&4));
    println!("9 = {}", cloned_arr.contains(&9));
    println!("10 = {}", cloned_arr.contains(&10));

    // iterate HashSet
}
