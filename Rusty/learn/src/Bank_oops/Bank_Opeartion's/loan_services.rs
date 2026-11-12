#[derive(Debug, Clone)]
pub enum LoanType {
    Personal,
    Home,
    Vehicle,
    Education,
}

#[derive(Debug, Clone)]
pub struct LoanApplication {
    pub loan_id: u64,
    pub customer_id: u64,
    pub loan_type: LoanType,
    pub principal_amount: f64,
    pub interest_rate: f32,
    pub tenure_months: u32,
}

