char * longestCommonPrefix(char ** strs, int strsSize){
    if (strsSize == 0) return "";

    int cnt = 0;
    char c;

    while (c = strs[0][cnt]) {
        for (int i = 0; i < strsSize; i++) {
            if (strs[i][cnt] != c) {
                strs[0][cnt] = '\0';
                return strs[0];
            }
        }
        cnt++;
    }
    strs[0][cnt] = '\0';
    return strs[0];
}