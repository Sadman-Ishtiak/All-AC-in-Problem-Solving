class Solution:
    def isValid(self, s: str) -> bool:
        a = ''
        if (s.count('(') == s.count(')')) and (s.count('[') == s.count(']')) and (s.count('{') == s.count('}')) :
            for i in range(int(len(s)/2)):
                s = s.replace("()",a)
                s = s.replace("{}",a)
                s = s.replace("[]",a)
                # print(s)
            if len(s) == 0 : return True
            else : return False
        else : return False