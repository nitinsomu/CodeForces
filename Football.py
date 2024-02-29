n = int(input())
team1 = input()
win = 1
team2 = ""
for i in range(1, n):
    team = input()
    if(team == team1):
        win += 1
    else:
        win -= 1
        team2 = team

if(win>0):
    print(team1)
else:
    print(team2)
    