class Solution {
public String removeDuplicates(String s, int k) {
Stack<Character> Master = new Stack<>();
for(char ch : s.toCharArray()){
Stack<Character> Helper = new Stack<>();
Helper.push(ch);
while(!Master.isEmpty() && Master.peek() == ch){
Helper.push(Master.pop());
}
if(Helper.size() != k){
while(!Helper.isEmpty()){
Master.push(Helper.pop());
}
}
}
StringBuilder sb = new StringBuilder();
while(!Master.isEmpty()){
sb.append(Master.pop());
}
return sb.reverse().toString();
}
}