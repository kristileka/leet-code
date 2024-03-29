#include <iostream>
#include <stack>

using namespace std;
bool isValid(string s){
  stack<char> stack;
  if(s.length() ==0) return true;
  if(s.length() == 1) return false;
  for(int i = 0 ; i<s.length();i++){
    char c = s[i];
    cout<<c;
    if(c=='}' || c == ')' || c == ']'){
      if(stack.size() == 0) return false;
      if(c=='}' && stack.top() != '{') return false;
      if(c == ')' && stack.top() != '(') return false;
      if(c == ']' && stack.top() != '[') return false;
      stack.pop();
    }
    else{
      stack.push(c);
    }
  }
  cout<<"end";
  if(stack.size() == 0) return true;
  return false;
}
