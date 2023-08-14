bool isPalindrome(int x){
    if (x < 0) {
        return false;
    }

    char temp[100];
    sprintf(temp, "%d", x);
    int n = strlen(temp);

    for (int i = 0; i < n/2; i++) {
        if (temp[i] != temp[n-i-1]) return false;
    }
    return true;
}