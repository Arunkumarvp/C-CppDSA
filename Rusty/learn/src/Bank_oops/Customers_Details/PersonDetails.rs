

#[derive(Debug, Clone)]
pub struct Person{
    pub name : String,
    pub age : u8,
    pub DOB : String,
}

#[derive(Debug, Clone)]
pub struct Account{
    pub account_number : u32, 
    pub account_type : String,
    pub balance : f64,

}
#[derive(Debug, Clone)]
pub struct Bank_entry_time{
    pub person_name : String,
    pub entry_time : String,
    pub exit_time : String,
}
#[derive(Debug, Clone)]
pub struct CardDetails{
     pub card_number : u64,
     pub card_type : String,
     pub card_expiry : String,
     pub card_cvv : u32,
}

#[derive(Debug, Clone)]
pub struct Customer {
    pub customer_id: u64,
    pub person: Person,
    pub account: Account,
    pub card_details: CardDetails,
    pub entry_record: Option<Bank_entry_time>,
}


