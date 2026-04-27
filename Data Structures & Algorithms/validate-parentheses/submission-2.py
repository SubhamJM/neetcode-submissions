class Solution:
    def isValid(self, s: str) -> bool:
        l = []
        for i in s:
            if i in '{[(':
                l.append(i)
            if l:
                if i == ')':
                    if l.pop() =='(':
                        continue
                    else:
                        return False
                elif i == ']':
                    if l.pop() == '[':
                        continue
                    else:
                        return False
                elif i == '}':
                    if l.pop() == '{':
                        continue
                    else:
                        return False
            else:
                return False
        return not bool(l)
