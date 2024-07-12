# # Python Program to Update
# # character of a String

# String1 = "Hello, I'm a Geek"
# print("Initial String: ")
# print(String1)

# # Updating a character of the String
# ## As python strings are immutable, they don't support item updation directly
# ### there are following two ways
# #1
# list1 = list(String1)
# list1[2] = 'p'
# String2 = ''.join(list1)
# print("\nUpdating character at 2nd Index: ")
# print(String2)

# #2
# String3 = String1[0:2] + 'r' + String1[3:]
# print(String3)

# list_of_strings = ['Hello','world']
# result = ' '.join(list_of_strings)
# print(result)  # Outputs: Hello world

# z="hello \"hello guru\" "
# print(z)


# str="o am studying python from ApnaCollege"
# print(str.endswith("ege"))
# poi=str.capitalize()
# ptr= str.replace("python","htlm")
# print(ptr)
# print(poi)

# a=int(input())
# if(a%7==0):
#   print("yes a multiple of seven")
# else:
#     print("not a multiple of seven")


# marks=[2,1,3]
# marks.append(4)
# print(marks)
# marks.sort()
# print(marks)
# marks.reverse()
# print(marks)
# marks[0]=43
# print(marks)
# marks.insert(0,4)
# print(marks)

# a=[45,56,65,43]
# b=[0,0,0,0]
# for i in range(4):
#     b[i] = a[4-1-i]
# print(b)

# a,b,c=int(input()),int(input()),int(input())
# p=[a,b,c]

# if p == p[::-1]:
#     print("palindrome list")
# else:
#     print("not a palindrome list")

# s = input("Enter a string: ")

# if s == s[::-1]:
#     print("The string is a palindrome")
# else:
#     print("The string is not a palindrome")


# a=[1,2,"puneet",3,4,"poiun"]
# a.insert(2,"ram")
# print(a)

# matrix=[[0 for i in range(3)] for j in range(3)]
# for i in range(3):
#    for j in range(3):
#        matrix[i][j]=int(input())
# matrix2=[[0 for i in range(3)] for j in range(3)]
# for i in range(3):
#    for j in range(3):
#        matrix2[i][j]=int(input())
# add=[[0 for i in range(3)] for j in range(3)]
# for i in range(3):
#    for j in range(3):
#        add[i][j]=matrix[i][j]+matrix2[i][j]
# print(add)\
    
#this below code is a element wise multiplication
# matrix=[[0 for i in range(3)] for j in range(3)]
# for i in range(3):
#    for j in range(3):
#        matrix[i][j]=int(input())
# matrix2=[[0 for i in range(3)] for j in range(3)]
# for i in range(3):
#    for j in range(3):
#        matrix2[i][j]=int(input())
# add=[[0 for i in range(3)] for j in range(3)]
# for i in range(3):
#    for j in range(3):
#        add[i][j]=matrix[i][j]*matrix2[i][j]
# print(add)
     
#matrix multiplication      
# matrix=[[0 for i in range(3)] for j in range(3)]
# for i in range(3):
#    for j in range(3):
#        matrix[i][j]=int(input())
# matrix2=[[0 for i in range(3)] for j in range(3)]
# for i in range(3):
#    for j in range(3):
#        matrix2[i][j]=int(input())
# add=[[0 for i in range(3)] for j in range(3)]
# for i in range(3):
#    for j in range(3):
#        for k in range(3):
#         add[i][j]+=matrix[i][k]*matrix2[k][j]
# print(add)


