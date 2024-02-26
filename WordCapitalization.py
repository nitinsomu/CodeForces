str = input()
char = str[0]
newstring = ""
newstring += char.upper()
for i in str[1:]:
    newstring += i
print(newstring)