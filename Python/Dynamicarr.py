a=[]
s=int(input("Enter Array Size : " ))
print("Enter Array Elements : ")
for i in range (s):
    a.append(int(input()))
print("The Accepted List")
print(a)
for i in a:
    if i==0:
        a.append(0)
        a.remove(i)
print("Company Order")
print(a)
print("Sorted Order")
a.sort(reverse=True)
print(a)