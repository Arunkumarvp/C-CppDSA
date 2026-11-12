#[derive(Debug, Clone)]
pub enum WithdrawalMethod {
    Atm,
    BankCounter,
    Cheque,
}

#[derive(Debug, Clone)]
pub struct Withdrawal {
    pub withdrawal_id: u64,
    pub account_number: u32,
    pub amount: f64,
    pub method: WithdrawalMethod,
    pub timestamp: String,
}

