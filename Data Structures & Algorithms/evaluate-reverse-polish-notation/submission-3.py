class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        def evaluate(op, num1, num2):
            match op:
                case '+': return num1+num2
                case '-': return num1-num2
                case '*': return num1*num2
                case '/':
                    if (num1 < 0 or num2 < 0 and abs(num1) % abs(num2) != 0):
                        return num1//num2 + 1
                    else:
                        return num1//num2
 
        stack = []
        for i in tokens:
            if i.lstrip('-').isdigit():
                stack.append(int(i))
            else:
                num1 = stack.pop()
                num2 = stack.pop()
                print(num2, num1, i)
                stack.append(evaluate(i, num2, num1))
        return stack[0]