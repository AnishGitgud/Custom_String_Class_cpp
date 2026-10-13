#include "header.h"

ostream & operator <<(ostream & out, String & str){
        if(str.s==nullptr)
                return out;
        cout << str.s;
        return out;
}

istream & operator >>(istream & in, String & str){
        if(str.s!=nullptr){
                delete str.s;
                str.s=nullptr;
        }
        str.s = new char[50];
        cin >> str.s;
        return in;
}

int operator <(String & s1, String & s2){
        int len=0;
        while(s1.s[len] && s2.s[len]){
                if(s1.s[len]==s2.s[len])
                        len++;
                else if(s1.s[len]>s2.s[len])
                        return 0;
                else if(s1.s[len]<s2.s[len])
                        return 1;
        }
        if(s1.s[len]>=s2.s[len])
                return 0;
        else
                return 1;
}

int operator >(String & s1, String & s2){
        int len=0;
        while(s1.s[len] && s2.s[len]){
                if(s1.s[len]==s2.s[len])
                        len++;
                else if(s1.s[len]<s2.s[len])
                        return 0;
                 else if(s1.s[len]>s2.s[len])
                        return 1;
        }
        if(s1.s[len]<=s2.s[len])
                return 0;
        else
                return 1;
}

int operator <=(String & s1, String & s2){
        int len=0;
        while(s1.s[len] && s2.s[len]){
                if(s1.s[len] > s2.s[len])
                        return 0;
                else if(s1.s[len] < s2.s[len])
                        return 1;
                else
                        len++;
        }
        if(s1.s[len] <= s2.s[len])
                return 1;
        else
                return 0;
}

int operator >=(String & s1, String & s2){
        int len=0;
        while(s1.s[len] && s2.s[len]){
                if(s1.s[len] < s2.s[len])
                        return 0;
                else if(s1.s[len] > s2.s[len])
                        return 1;
                else
                        len++;
        }
        if(s1.s[len] >= s2.s[len])
                return 1;
        else
                return 0;
}

int operator !=(String & s1, String & s2){
        int len=0;
        while(s1.s[len] && s2.s[len]){
                if(s1.s[len] != s2.s[len])
                        return 1;
                else
                        len++;
        }
        if(s1.s[len] == s2.s[len])
                return 0;
        else
                return 1;
}

int operator ==(String & s1, String & s2){
        int len=0;
        while(s1.s[len] && s2.s[len]){
                if(s1.s[len] != s2.s[len])
                        return 0;
                else
                        len++;
        }
        if(s1.s[len] == s2.s[len])
                return 1;
        else
                return 0;
}

