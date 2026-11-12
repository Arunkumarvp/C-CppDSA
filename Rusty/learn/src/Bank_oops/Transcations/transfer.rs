#[derive(Debug, Clone)]
pub enum TransferMode {
    Internal,
    Neft,
    Rtgs,
    Imps,
    Wire,
}

#[derive(Debug, Clone)]
pub struct FundTransfer {
    pub transfer_id: u64,
    pub from_account: u32,
    pub to_account: u32,
    pub amount: f64,
    pub mode: TransferMode,
    pub timestamp: String,
}

