#[derive(Debug, Clone)]
pub struct InterestPlan {
    pub account_type: String,
    pub annual_rate: f32,
    pub compounding_frequency: String, // e.g. "Monthly", "Quarterly", "Annually"
}

