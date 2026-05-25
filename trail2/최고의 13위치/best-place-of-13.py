N = int(input())
grid = [list(map(int, input().split())) for _ in range(N)]

# Please write your code here.
m=0
for i in range(N):
    for j in range(N-2):
        k=grid[i][j]+grid[i][j+1]+grid[i][j+2]
        if k>m:
            m=k
print(m)