//to lower case
//https://leetcode.com/problems/to-lower-case/submissions/2200077701/
char* toLowerCase(char* s) {
    int i = 0;

    while (s[i] != '\0') {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] + 32;
        }
        i++;
    }

    return s;
}
