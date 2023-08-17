n=int(input("Enter the Number of Elements : "))
a=[]
print("Enter the Elements : ")
for i in range(n):
    a.append(int(input()))
length=len(a)
for i in a:
    for j in range(length):
        if(i==a[j]):
            a.pop(j)
            length=len(a)-1
print(a)