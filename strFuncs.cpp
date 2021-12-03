#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include "strFuncs.h"
#include <cctype>
using namespace std;


/* Precondition: Two valid strings s1 and s2, each containing a mix of alphabets, spaces and punctuations
 * Post condition: Return true if one string is an anagram of the other string. White spaces, punctuations and
 * the case for the letters (upper or lower) should not
 * affect your result. 
 */
string cleanup(string str){
  string returnStr;
  for (int i = 0; i<strlen(str);i++){
    if (isalpha(str.substr(i,i+1)){
       returnStr+= tolower(str.substr(i,i+1));
       }
  }
  return returnStr;
}
bool isAnagram(string s1, string s2){  
  s1 = cleanup(s1);
  s2 = cleanup(s2);
  int isSame;
  isSame = strcmp(const char *s1,const char *s2);
  if (isSame == 0){
    cout<<"they are the same";
    return true;
  }
  else {
    cout<<"not the same";
    return false;
  }
}

/* Precondition: s1 is a valid string that may contain upper or lower case alphabets, no spaces or special characters
 * Postcondition: Returns true if s1 is a palindrome, false otherwise
 * You should provide a recursive solution
 */
bool isPalindrome(const string s1){

  return true;
}


