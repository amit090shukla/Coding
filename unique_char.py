# s = input("Enter the string")

# def uniqueCharacters(str): 
#     for i in range(len(str)): 
#         for j in range(i + 1,len(str)):  
#             if(str[i] == str[j]): 
#                 return False; 
#     return True; 

  
# if(uniqueCharacters(s)): 
#     print("The String ", s," has all unique characters"); 
# else: 
#     print("The String ", s, " has duplicate characters"); 

s = input("Enter the string")

dic = {};

def check(s):
    for i in range(len(s)):
        if s[i] in dic: 
            return False;
        else:
            dic[s[i]] = True;
    return True;

print(check(s))
