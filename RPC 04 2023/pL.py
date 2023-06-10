# your code goes here
n=int(input())
l=list(map(float, input().strip().split()))
s=0
for i in range(0,n):
  s+=l[i]**3
print(s**(1/3))