#[derive(Debug, Clone)]
pub struct AuthCredentials {
    pub username: String,
    pub password_hash: String,
    pub mfa_secret: Option<String>,
    pub is_logged_in: bool,
}

