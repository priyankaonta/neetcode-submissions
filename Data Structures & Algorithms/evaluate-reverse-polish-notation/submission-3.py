class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        stack = []
        number = False
        
        for i in tokens:
            try: 
                int(i)
                number = True
            except ValueError:
                number = False
            if number == True:
                stack.append(int(i))
               
            elif number == False:
                if i == "+":
                    num1 = stack.pop()
                    num2 = stack.pop()
                    stack.append(int(num2 + num1))
                if i == "-":
                    num1 = stack.pop()
                    num2 = stack.pop()
                    stack.append(int(num2 - num1))
                if i == "*":
          
                    num1 = stack.pop()
                    num2 = stack.pop()
                    stack.append(int(num1 * num2))
                if i == "/":
                    num1 = stack.pop()
                    num2 = stack.pop()
                    stack.append(int(num2 / num1))
        return stack.pop()
                
                
                


        

            
        

        