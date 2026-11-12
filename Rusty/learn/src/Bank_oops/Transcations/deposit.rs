#[derive(Debug, Clone)]
pub enum DepositType {
    Cash,
    Cheque,
    OnlineTransfer,
}

#[derive(Debug, Clone)]
pub struct Deposit {
    pub deposit_id: u64,
    pub account_number: u32,
    pub amount: f64,
    pub deposit_type: DepositType,
    pub timestamp: String,
}

