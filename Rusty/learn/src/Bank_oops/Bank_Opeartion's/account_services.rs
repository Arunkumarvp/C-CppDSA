#[derive(Debug, Clone)]
pub enum AccountStatus {
    Active,
    Dormant,
    Frozen,
    Closed,
}

#[derive(Debug, Clone)]
pub struct AccountServiceRequest {
    pub request_id: u64,
    pub account_number: u32,
    pub status: AccountStatus,
    pub requested_at: String,
}

