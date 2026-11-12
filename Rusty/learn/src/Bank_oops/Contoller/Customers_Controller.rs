

#[path = "Bank_oops/Services/Customers_Services.rs"]

mod customers_services;




fn PersonDetails() {
    let personData = customers_services::create_person(String::from("John Doe"), 30, String::from("1993-01-01"));
    println!("Person Details: Name: {}, Age: {}, DOB: {}",personData.DOB, personData.name, personData.age);


    let accountData =  customers_services::create__account(123456, String::from("Savings"), 1000.0);
    println!("Account Details: Account Number: {}, Account Type: {}, Balance: {}", accountData.account_number, accountData.account_type, accountData.balance);  

    
}