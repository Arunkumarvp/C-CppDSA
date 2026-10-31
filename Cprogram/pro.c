char* removeOuterParentheses(char* s) {
    int depth = 0;
    int write_idx = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '(') {
            if (depth > 0) {
                s[write_idx++] = s[i];
            }
            depth++;
        } else { // s[i] == ')'
            depth--;
            if (depth > 0) {
                s[write_idx++] = s[i];
            }
        }
    }

    s[write_idx] = '\0';
    return s;
}


char* capitalizeTitle(char* title) {
    int i   
}