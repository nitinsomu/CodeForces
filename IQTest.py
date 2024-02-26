board = []
for i in range (4):
    temp = input()
    row = []
    for i in temp:
        if(i == '#'):
            row.append(1)
        else:
            row.append(0)
    board.append(row)
flag = 1
for i in range(3):
    for j in range(3):
        if(not board[i][j]):
            if(board[i][j+1] and board[i+1][j] and board[i+1][j+1]):
                print("YES")
                flag = 0
            elif((not board[i][j+1] and not board[i+1][j]) or (not board[i][j+1] and not board[i+1][j+1]) or (not board[i+1][j+1] and not board[i+1][j])):
                print("YES")
                flag = 0
        if(board[i][j]):
            if(not board[i][j+1] and not board[i+1][j] and not board[i+1][j+1]):
                print("YES")
                flag = 0
            elif((board[i][j+1] and board[i+1][j]) or (board[i][j+1] and board[i+1][j+1]) or (board[i+1][j+1] and board[i+1][j])):
                print("YES")
                flag = 0
        if(not flag):
            break
    if(not flag):
       break
if(flag):
    print("NO")
        
