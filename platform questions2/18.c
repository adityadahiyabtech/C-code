//find the index of the first occurence
//https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/description/
int strStr(char* haystack, char* needle) {
    int i, j;

    for (i = 0; haystack[i] != '\0'; i++) {
        for (j = 0; needle[j] != '\0'; j++) {

            if (haystack[i + j] != needle[j]) {
                break;
            }
        }

        if (needle[j] == '\0') {
            return i;
        }
    }

    return -1;
}
