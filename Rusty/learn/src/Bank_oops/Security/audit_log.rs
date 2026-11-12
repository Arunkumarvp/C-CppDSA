#[derive(Debug, Clone)]
pub struct AuditLog {
    pub log_id: u64,
    pub actor: String,
    pub action_performed: String,
    pub ip_address: String,
    pub timestamp: String,
}

