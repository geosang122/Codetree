import sys
n = int(input())
A = list(map(int, input().split()))

# Please write your code here.

min=sys.maxsize
for i in range(n):
    #i는 모이는 장소
    sum=0
    for j in range(n):
        #j는 출발지
        sum+=abs(i-j)*A[j]
    if min>sum:
        min=sum
print(min)