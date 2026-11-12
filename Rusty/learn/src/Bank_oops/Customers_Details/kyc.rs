#[derive(Debug, Clone)]
pub enum KycStatus {
    Pending,
    Verified,
    Rejected,
}

#[derive(Debug, Clone)]
pub struct KycDetails {
    pub customer_id: u64,
    pub id_type: String,
    pub id_number: String,
    pub address_proof: String,
    pub status: KycStatus,
}

