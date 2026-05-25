A = input()

# Please write your code here.
l=len(A)
sum=0
for i in range(l):
    if A[i]=='(':
        for j in range(i+1,l):
            if A[j]==')':
                sum+=1

print(sum)