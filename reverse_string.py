# Reverse A String

st = input("Enter the string");
i = 0
j = len(st)
outputStr = "";
for i in range(len(st), 0, -1):
    outputStr+=st[i-1]

print(outputStr)
    

