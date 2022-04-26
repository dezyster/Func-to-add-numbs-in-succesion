class IntFunction:
    m_numb = 0
    def __init__(self, numb):
        self.m_numb = numb
    
    def __call__(self, numb):
        self.m_numb += numb
        return self
    
    def __add__(self, numb):
        self.m_numb += numb
        return self
        
    def __str__(self):
        return str(self.m_numb)

def add(numb):
    return IntFunction(numb)



print (add(1), "\n")

print (add(1)(2)(3)(4)(5)(6), "\n")

addTwo = add(2)
print (addTwo, "\n")

addTwo + 3
print (addTwo, "\n")

addTwo(3)(5)
print (addTwo, "\n")

