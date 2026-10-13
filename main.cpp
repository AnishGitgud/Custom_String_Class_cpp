#include "header.h"

int main(){
        /*TEST PROGRAM FOR DEMONSTRATION*/
        //1. Creation of String objects using the default and parameterised constructors.
        cout << "------------------------------------------------------------------------------------------" << endl;
        cout << "1.Creation of String objects using the default and parameterised constructors." << endl;
        cout << "------------------------------------------------------------------------------------------" << endl;
        String s_def;
        String s_param("Parameterised");
        cout << "created s_def using default constructor(NULL) and s_param using parameterised constructor." << endl;
        cout << "s_def : \"" << s_def << "\"" << endl;
        cout << "s_param : \"" << s_param << "\"" << endl;
        cout << endl << endl;

        //2. Copy construction and assignment.
        cout << "------------------------------------------------------------------------------------------" << endl;
        cout << "2.Copy construction and assignment." << endl;
        cout << "------------------------------------------------------------------------------------------" << endl;
        String s_copy(s_param);
        cout << "created s_copy using copy constructor(s_param)." << endl;
        cout << "s_copy : \"" << s_copy << "\"" << endl;
        cout << endl << endl;

        //3. Concatenation using the addition operator.
        cout << "------------------------------------------------------------------------------------------" << endl;
        cout << "3.Concatenation using the addition operator." << endl;
        cout << "------------------------------------------------------------------------------------------" << endl;
        s_def="Default";
        String s_con;
        s_con = s_def + s_param;
        cout << "s_def : \"" << s_def << "\"" << endl;
        cout << "s_param : \"" << s_param << "\"" << endl;
        cout << "s_con = s_def+s_param = " << s_con << endl;
        cout << endl << endl;

        //4. Character access using the subscript operator.
        cout << "------------------------------------------------------------------------------------------" << endl;
        cout << "4.Character access using the subscript operator." << endl;
        cout << "------------------------------------------------------------------------------------------" << endl;
        cout << "s_param : \"" << s_param << "\"" << endl;
        cout << "s_param[4] = " << s_param[4] << endl;
        cout << endl << endl;

        //5. Input and output using the stream operators.
        cout << "------------------------------------------------------------------------------------------" << endl;
        cout << "5.Input and output using the stream operators." << endl;
        cout << "------------------------------------------------------------------------------------------" << endl;
        String strm;
        cout << "Enter any word to store in strm" << endl;
        cin >> strm;
        cout << "strm = " << strm << endl;
        cout << endl << endl;

        //6. All comparison operators.
        cout << "------------------------------------------------------------------------------------------" << endl;
        cout << "6. All comparison operators." << endl;
        cout << "------------------------------------------------------------------------------------------" << endl;
        cout << "s_def : \"" << s_def << "\"" << endl;
        cout << "s_param : \"" << s_param << "\"" << endl;

        cout << "s_def <  s_param : " << (s_def <  s_param) << endl;
        cout << "s_def >  s_param : " << (s_def >  s_param) << endl;
        cout << "s_def <= s_param : " << (s_def <= s_param) << endl;
        cout << "s_def >= s_param : " << (s_def >= s_param) << endl;
        cout << "s_def != s_param : " << (s_def != s_param) << endl;
        cout << "s_def == s_param : " << (s_def == s_param) << endl;
        cout << endl << endl;

        //7. All required friend string functions.
        cout << "------------------------------------------------------------------------------------------" << endl;
        cout << "7. All required friend string functions." << endl;
        cout << "------------------------------------------------------------------------------------------" << endl;
        String s1("Alphonso"),s2("Baiganpalli");

        cout << "s1 : \"" << s1 << "\"" << endl;
        cout << "s2 : \"" << s2 << "\"" << endl;
        strcpy(s1,s2);
        cout << "strcpy(s1,s2)" << endl;
        cout << "s1 : \"" << s1 << "\"" << endl;
        cout << "s2 : \"" << s2 << "\"" << endl;
        cout << endl << endl;

        s1="Alphonso";
        s2="Baiganpalli";
        cout << "s1 : \"" << s1 << "\"" << endl;
        cout << "s2 : \"" << s2 << "\"" << endl;
        strncpy(s1,s2,5);
        cout << "strncpy(s1,s2,5)" << endl;
         cout << "s1 : \"" << s1 << "\"" << endl;
        cout << "s2 : \"" << s2 << "\"" << endl;
        cout << endl << endl;

        s1="Alphonso";
        s2="Alphonse";
        cout << "s1 : \"" << s1 << "\"" << endl;
        cout << "s2 : \"" << s2 << "\"" << endl;
        cout << "strcmp(s1,s2) = " << strcmp(s1,s2) << endl;
        cout << "strncmp(s1,s2,4) = " << strncmp(s1,s2,4) << endl;
        cout << endl << endl;

        s1="Alphonso";
        s2="Baiganpalli";
        cout << "s1 : \"" << s1 << "\"" << endl;
        cout << "s2 : \"" << s2 << "\"" << endl;
        strcat(s1,s2);
        cout << "strcat(s1,s2)" << endl;
        cout << "s1 : \"" << s1 << "\"" << endl;
        strncat(s1,s2,3);
        cout << "strncat(s1,s2,3)" << endl;
        cout << "s1 : \"" << s1 << "\"" << endl;
        cout << endl << endl;

        s1="Alphonso";
        s2="Baiganpalli";
        cout << "s1 : \"" << s1 << "\"" << endl;
        strrev(s1);
        cout << "strrev(s1) : s1 = " << s1 << endl;
        cout << endl << endl;

        s1="Alphonso";
        s2="Baiganpalli";
        cout << "s1 : \"" << s1 << "\"" << endl;
        cout << "s2 : \"" << s2 << "\"" << endl;
        strupr(s1);
        cout << "strupr(s1) : s1 = " << s1 << endl;
        cout << "s1 : \"" << s1 << "\"" << endl;
        strlwr(s2);
        cout << "strlwr(s1) : s1 = " << s1 << endl;
        cout << "s2 : \"" << s2 << "\"" << endl;
        cout << endl << endl;

        s1="Alphonso";
        s2="Baiganpalli";
        cout << "s1 : \"" << s1 << "\"" << endl;
        cout << "s2 : \"" << s2 << "\"" << endl;
        s1=strchr(s2,'a');
        cout << "strchr(s2,'a') : " << s1 << endl;
        s1=strrchr(s2,'a');
        cout << "strrchr(s2,'a') : " << s1 << endl;
        cout << endl << endl;

        s1="Alphonso";
        s2="Baiganpalli";
        cout << "s1 : \"" << s1 << "\"" << endl;
        cout << "s2 : \"" << s2 << "\"" << endl;
        char s[]="pal";
        s1=strstr(s2,s);
        cout << "strchr(s2,\"pal\") : " << s1 << endl;
        cout << endl << endl;

        cout << "strlen(s2) = " << strlen(s2) << endl;

        cout << endl << endl;
}
