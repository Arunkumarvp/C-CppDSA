#[derive(Debug, Clone)]
pub enum CardAction {
    Block,
    Unblock,
    SetPin,
    UpgradeLimit,
}

#[derive(Debug, Clone)]
pub struct CardServiceRequest {
    pub card_number: u64,
    pub action: CardAction,
    pub timestamp: String,
}

