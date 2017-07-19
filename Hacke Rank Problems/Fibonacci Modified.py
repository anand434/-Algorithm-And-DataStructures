t1 , t2 , n = input().split(" ")
t1 = int(t1)
t2 = int(t2)
n = int(n)
ans = []
result = 0
ans.append(t1)
ans.append(t2)
for i in range(2 , n+1):
    result = ans[i-2] + (ans[i-1]**2)
    ans.append(result)
print(ans[n-1])
