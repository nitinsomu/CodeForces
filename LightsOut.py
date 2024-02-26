board = []
for i in range (3):
    row = list(map(int, input().split()))
    board.append(row)

ans = [[0 for _ in range(3)] for _ in range(3)]
for i in range (3):
    for j in range(3):
        toggles = board[i][j]
        ans[i][j]+=toggles
        if(j<2):
            ans[i][j+1]+=toggles
        if(i<2):
            ans[i+1][j]+=toggles
        if(j>0):
            ans[i][j-1]+=toggles
        if(i>0):
            ans[i-1][j]+=toggles
    
for i in range(3):
    for j in range(3):
        if(ans[i][j]%2 == 0):
            ans[i][j] = 1
        else:
            ans[i][j] = 0

for i in range(3):
    for j in range(3):
        print(ans[i][j], end="")
    print()