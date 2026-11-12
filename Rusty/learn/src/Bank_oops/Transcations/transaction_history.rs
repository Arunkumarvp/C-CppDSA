#[derive(Debug, Clone)]
pub enum TransactionStatus {
    Success,
    Pending,
    Failed,
}

#[derive(Debug, Clone)]
pub struct TransactionRecord {
    pub transaction_id: u64,
    pub account_number: u32,
    pub transaction_type: String, // "Deposit", "Withdrawal", "Transfer"
    pub amount: f64,
    pub remaining_balance: f64,
    pub status: TransactionStatus,
    pub timestamp: String,
}

