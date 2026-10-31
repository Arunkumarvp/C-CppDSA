

pub fn hollow_square(n: usize) {
    for i in 1..=n {
        for j in 1..=n {
            if i == 1 || i == n || j == 1 || j == n || i == j || j == n - i + 1 {
                print!("*");
            } else {
                print!(" ");
            }
        }
        println!();
    }
}



pub fn pyramid(n: usize){
    for i in 1..=n{
        for j in 1..=n-i{
            print!(" ");
        }
        for k in 1..=2*i-1{
            print!("*");
        }
        println!();
    }

}