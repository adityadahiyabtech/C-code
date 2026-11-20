// length of last word
// https://leetcode.com/problems/length-of-last-word/description/
int lengthOfLastWord(char* s) {
    int i = 0;
    int count = 0;

    // Find the end of the string
    while (s[i] != '\0') {
        i++;
    }

    i--;

    // Ignore trailing spaces
    while (i >= 0 && s[i] == ' ') {
        i--;
    }

    // Count characters of the last word
    while (i >= 0 && s[i] != ' ') {
        count++;
        i--;
    }

    return count;
}
