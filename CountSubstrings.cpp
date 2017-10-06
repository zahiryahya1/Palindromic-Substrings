
int countSubstrings(string s) {        
    int count = 0;
    // for each substrings from size 1 to n-1
    // check if its a palindrom
    for (int j = 1; j < s.size(); j++) {
        for (int i = 0; i < s.size() - j + 1; i++) {
            if (isPalindrom(s.substr(i, j))) {
                count++;
            }
        }
    }
        
    // lastly check the whole string
    if (isPalindrom(s))
        count++;
        
    return count;        
}
    
// checks if string is a palindrom
bool isPalindrom(string s) {
    if (s.size() == 0)
        return false;
        
    for (int i = 0, j = s.size() - 1; i < s.size() && j >=0; i++, j--) {
        if (s.at(i) != s.at(j)) {
            return false;
        }
    }
    return true;
}
