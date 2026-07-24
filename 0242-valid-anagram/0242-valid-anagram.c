bool isAnagram(char* s, char* t) {
    
    int freq1[26] = {0};
    int freq2[26] = {0};
    int size1 = strlen(s);
    int size2 = strlen(t);

    for(int i = 0 ; i < size1 ; i++) {
        freq1[s[i] - 'a']++;
    }

    for(int i = 0 ; i < size2 ; i++) {
        freq2[t[i] - 'a']++;
    }

    for(int i = 0 ; i < 26 ; i++) {
        if(freq1[i] != freq2[i]) {
            return false;
        }
    }
 
    return true;
}