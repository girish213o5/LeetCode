class Solution {
    public String reverseVowels(String s) {
        char st[] = s.toCharArray();
        int l = s.length();
        char t;
        int i=0 ;
        int j=l-1;
        while(i<j)
        {
            if((st[i] == 'A' ||st[i] == 'a' ||st[i] == 'E' ||st[i] == 'e' ||st[i] == 'I' ||st[i] == 'i' ||st[i] == 'O' ||st[i] == 'o' ||st[i] == 'U' ||st[i] == 'u' ) && ( st[j] == 'A' ||st[j] == 'a' ||st[j] == 'E' ||st[j] == 'e' ||st[j] == 'I' ||st[j] == 'i' ||st[j] == 'O' ||st[j] == 'o' ||st[j] == 'U' ||st[j] == 'u' ))
            {
                t= st[i];
                st[i] = st[j];
                st[j] = t;
                i++;
                j--;                
            }
            else{
            if(st[i] != 'A' &&st[i] != 'a' &&st[i] != 'E' &&st[i] != 'e' &&st[i] != 'I' &&st[i] != 'i' &&st[i] != 'O' &&st[i] != 'o' &&st[i] != 'U' &&st[i] != 'u' )
                i++;
            else if(st[j] != 'A' &&st[j] != 'a' &&st[j] != 'E' &&st[j] != 'e' &&st[j] != 'I' &&st[j] != 'i' &&st[j] != 'O' &&st[j] != 'o' &&st[j] != 'U' &&st[j] != 'u' )
                j--;
            }
        }
        return  String.valueOf(st);
    }
}