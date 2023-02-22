// possible solution
// without using map : don't know
// using hashmap:
use std::collections::HashMap;

fn fact(n: u128) -> u128 {
    if n == 0 {
        return 1;
    }
    return n * fact(n - 1);
}

fn main() {
    let mut buf = String::new();
    std::io::stdin().read_line(&mut buf).expect("Bomb!");

    let total_test: usize = buf.trim().parse().unwrap();

    for _ in 1..=total_test {
        let mut buf = String::new();
        std::io::stdin().read_line(&mut buf).expect("Bomb!");

        let words: Vec<String> = buf
            .trim()
            .split(" ")
            .map(|x| x.parse().expect("ops"))
            .collect();

        // ways to iterate vector
        // for w in &words {
        //     for ww in &words {
        //         if ww == w {
        //             println!("Gotcha!")
        //         }
        //     }
        // }
        //

        let total_words = words.len();

        // creating HashMap
        let mut map: HashMap<String, usize> = HashMap::new();

        // counting occurence of each words & storing in map
        for w in &words {
            if map.contains_key(&w.to_string()) {
                map.insert(w.to_string(), map[&w.to_string()] + 1);
            } else {
                map.insert(w.to_string(), 1);
            }
        }

        // assuming no dublicates
        let mut ans = fact(total_words as u128);

        // handling dublicates
        for (_k, v) in &map {
            if *v > 1 {
                ans /= fact(*v as u128);
            }
        }

        // output
        println!("1/{ans}");
    }
}
