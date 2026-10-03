class Solution {
public:
    int lengthOfLastWord(string s) {
       int x=s.size();
       int count =0;
       int k=0;
       int l=0;
       for(int i=x-1; i>=0; i--){
        if(s[i]==' '){
            count++;
        }else{
            l=count;
            k++;
        }
        if(k>0&&count>l){
            break;
        }
       }
       return k;
    }
};