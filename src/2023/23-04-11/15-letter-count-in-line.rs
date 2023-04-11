use std::collections::BTreeMap;
use std::collections::HashMap;

fn main() {
    // read total test
    let mut buf = String::new();
    std::io::stdin()
        .read_line(&mut buf)
        .expect("Failed to read test-casae!");
    let total_test = buf.trim().parse::<usize>().unwrap();

    for _ in 0..total_test {
        let mut line = String::new();
        std::io::stdin()
            .read_line(&mut line)
            .expect("Failed to line");

        let line = line.trim();

        // println!("{}", line.chars().count()); // gives size ?
        // println!("{}", line.matches('c').count()); // does what required, but

        // using HashMap
        let mut letter_count = HashMap::<char, u32>::new();

        for ch in line.chars() {
            let count = letter_count.entry(ch).or_insert(0);
            *count += 1;
        }

        // unsorted way!j
        // for (key, value) in &letter_count {
        //     println!("{key} = {value}")
        // }

        //
        let mut keys: Vec<char> = letter_count.keys().cloned().collect();

        // sorting the keys
        keys.sort();

        // now iterate by each char
        for key in keys {
            println!("{} = {}", key, letter_count.get(&key).unwrap())
        }

        // ++ more better approach, as BtreeMap is sorted by keys
        let mut char_map: BTreeMap<char, u32> = BTreeMap::new();
        for ch in line.chars() {
            let count = char_map.entry(ch).or_insert(0);
            *count += 1;
        }
        for (key, value) in &char_map {
            println!("{} = {}", key, value);
        }
    }
}
