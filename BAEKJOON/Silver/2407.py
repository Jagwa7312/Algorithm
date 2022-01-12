import sys
import math
input = sys.stdin.readline

a, b = map(int, input().split())

m = math.factorial(a)
n = (math.factorial(a - b)) * (math.factorial(b))

print(m // n)