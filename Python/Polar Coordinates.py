# Enter your code here. Read input from STDIN. Print output to STDOUT
from cmath import phase
z=complex(input())
#print(z)
x=z.real
y=z.imag
print(abs(complex(x,y)))
print(phase(complex(x,y)))
