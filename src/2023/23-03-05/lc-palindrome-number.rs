fn is_palindrome(x: i32) -> bool {
    // negative numbers are not palindrome
    if x < 0 {
        return false;
    }

    // int to string
    let s = x.to_string();
    // reversing string
    let r: String = s.chars().rev().collect();

    // if true, palindrome else not
    return s == r;
}

fn main() {
    let x = 121;

    if is_palindrome(x) {
        println!("Palindrome");
    } else {
        println!("Not a Palindrome");
    }
}
