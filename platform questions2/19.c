//first unique chharacter in a string
//https://leetcode.com/problems/first-unique-character-in-a-string/
int firstUniqChar(char* s) {
    int freq[26] = {0};
    int i;

    // Count frequency of each character
    for (i = 0; s[i] != '\0'; i++) {
        freq[s[i] - 'a']++;
    }

    // Find first character with frequency 1
    for (i = 0; s[i] != '\0'; i++) {
        if (freq[s[i] - 'a'] == 1) {
            return i;
        }
    }

    return -1;
}
