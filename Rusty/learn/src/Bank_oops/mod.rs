#[path = "Customers_Details"]
pub mod customers {
    #[path = "PersonDetails.rs"]
    pub mod person_details;
    pub mod kyc;
}

#[path = "Transcations"]
pub mod transactions {
    pub mod deposit;
    pub mod withdraw;
    pub mod transfer;
    pub mod transaction_history;
}

#[path = "Bank_Opeartion's"]
pub mod operations {
    pub mod account_services;
    pub mod card_services;
    pub mod loan_services;
    pub mod interest_calculator;
}

#[path = "Security"]
pub mod security {
    pub mod authentication;
    pub mod audit_log;
}

