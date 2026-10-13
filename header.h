#include <iostream>

using namespace std;

class String{
        char * s;

        public:
        String(){                       //Default constructor
                s=nullptr;
        }
        String(const char * str){       //Parameterised constructor
                int len=0;
                while(str[len])
                        len++;
                s = new char [len+1];
                len=0;
                while(str[len]){
                        s[len]=str[len];
                        len++;
                }
                s[len]=0;
        }
        String(String & str){                   //Copy constructor
                int len=0;
                while(str.s[len])
                        len++;
                s = new char [len+1];
                len=0;
                while(str.s[len]){
                        s[len]=str.s[len];
                        len++;
                }
                s[len]=0;
        }
        ~String(){                      //Destructor
                if(s!=nullptr){
                        delete s;
                        s=nullptr;
                }
        }

        //OPERATORS
        //+
        char * operator +(String & str){
                int len1=0,len2=0;
                while(s[len1])
                        len1++;
                while(str.s[len2])
                        len2++;
                char * ch_str = new char[len1+len2+1];
                len1=len2=0;
                while(s[len1]){
                        ch_str[len1]=s[len1];
                        len1++;
                }
                while(str.s[len2]){
                        ch_str[len1+len2]=str.s[len2];
                        len2++;
                }
                ch_str[len1+len2]=0;
                return ch_str;
        }

        //>
        friend int operator <(String &,String &);
        //<
        friend int operator >(String &,String &);
        //>=
        friend int operator <=(String &,String &);
        //<=
        friend int operator >=(String &,String &);
        //!=
        friend int operator !=(String &,String &);
        //==
        friend int operator ==(String &,String &);

        //operators that cannot be overloaded as friends        =,[]
        void operator =(String & str){
                if(s!=nullptr){
                        delete s;
                        s = nullptr;
                }
                int len=0;
                while(str.s[len])
                        len++;
                s = new char[len];
                len=0;
                while(str.s[len]){
                        s[len]=str.s[len];
                        len++;
                }
                s[len]=0;
        }
        void operator =(const char * str){
                if(s!=nullptr){
                        delete s;
                        s = nullptr;
                }
                int len=0;
                while(str[len])
                        len++;
                s = new char[len];
                len=0;
                while(str[len]){
                        s[len]=str[len];
                        len++;
                }
                s[len]=0;
        }
        char & operator[](int ind){
                return s[ind];
        }

        //operators that cannot be overloaded as members        <<,>>
        friend ostream& operator <<(ostream &, String &);
        friend istream& operator >>(istream &, String &);

        //string operations
        friend String & strcpy(String &, String &);
        friend String & strncpy(String &, String &, unsigned int);
        friend int strcmp(String &, String &);
        friend int strncmp(String &, String &, unsigned int);
        friend String & strcat(String &, String &);
        friend String & strncat(String &, String &, unsigned int);
        friend String & strrev(String &);
        friend void strupr(String &);
        friend void strlwr(String &);
        friend char * strchr(String &, char);
        friend char * strrchr(String &, char);
        friend char * strstr(String &, char *);
        friend unsigned int strlen(String &);
};
