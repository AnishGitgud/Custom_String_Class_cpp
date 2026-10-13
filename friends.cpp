#include "header.h"

String & strcpy(String & s1, String & s2){
        s1=s2;
        return s1;
}

String & strncpy(String & s1, String & s2, unsigned int n){
      if(s1.s!=nullptr){
                delete s1.s;
                s1.s=nullptr;
        }
        int len=0;
        while(s2.s[len])
                len++;
        if(len<=n)
                s1.s = new char[len+1];
        else
                s1.s = new char[n+1];
        len=0;
        while(s2.s[len] && (n-1)){
                s1.s[len]=s2.s[len];
                len++,n--;
        }
        s1.s[len]=0;
        return s1;
}

unsigned int strlen(String & str){
        unsigned int len=0;
        while(str.s[len])
                len++;
        return len;
}

void strupr(String & str){
        int len=0;
        char ch;
        while(ch=str.s[len]){
                if(ch>='a' && ch<='z')
                        str.s[len]-=32;
                len++;
        }
}

void strlwr(String & str){
        int len=0;
        char ch;
        while(ch=str.s[len]){
                if(ch>='A' && ch<='Z')
                        str.s[len]+=32;
                len++;
        }
}

char * strchr(String & str, char ch){
        char * ptr=str.s;
        while(*ptr){
                if(*ptr==ch){
                        return ptr;
                }
                ptr++;
        }
        return nullptr;
}

char * strrchr(String & str, char ch){
        char * ptr=str.s,* last=nullptr;
        while(*ptr){
                if(*ptr==ch)
                        last=ptr;
                ptr++;
        }
        return last;
}

int strcmp(String & s1, String & s2){
        int len=0,diff;
        while(s1.s[len] && s2.s[len]){
                diff=s1.s[len] - s2.s[len];
                if(diff!=0)
                        return diff;
                len++;
        }
        if(diff = s1.s[len] - s2.s[len])
                return diff;
        else
                return 0;
}

int strncmp(String & s1, String & s2, unsigned int n){
        if(n==0)
                return 0;
        int len=0,diff;
        while(s1.s[len] && s2.s[len] && (n-1)){
                diff=s1.s[len] - s2.s[len];
                if(diff!=0)
                        return diff;
                len++;
                n--;
        }
        if(diff = s1.s[len] - s2.s[len])
                return diff;
        else
                return 0;
}

String & strrev(String & s1){
        int i=0,len=0;
        char ch;
        while(s1.s[len])
                len++;
        len--;
        while(i<len){
                ch=s1.s[i];
                s1.s[i]=s1.s[len];
                s1.s[len]=ch;
                i++;
                len--;
        }
        return s1;
}

char * strstr(String & hay, char * needle){
        char * ptr=hay.s,*found=nullptr;
        int len;
        while(*ptr){
                if(*ptr==*needle){
                        len=1;
                        while(needle[len] && ptr[len]){
                                if(needle[len] != ptr[len])
                                        break;
                                len++;
                        }
                        if(needle[len]==0){
                                found=ptr;
                                break;
                        }
                }
                ptr++;
        }
        return found;
}

String & strcat(String & s1, String & s2){
        s1=s1+s2;
        return s1;
}

String & strncat(String & s1, String & s2, unsigned int n){
        int len=0;
        while(s2.s[len] && len<n)
                len++;
        String temp;
        temp.s = new char[len+1];
        len=0;
        while(len<n){
                temp.s[len]=s2.s[len];
                len++;
        }
        temp[len]=0;
        s1=s1+temp;
        return s1;
}
