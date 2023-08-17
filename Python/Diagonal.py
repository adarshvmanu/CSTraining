r=int(input("Enter the Number of Rows : "))
c=int(input("Enter the Number of Columns : "))
if r==c:
    a=[]
    print("Enter the Matrix")
    for i in range(r):
        m=[]
        for j in range(c):
            m.append(int(input()))
        a.append(m)


    for i in range(r):
        for j in range(c):
            if i==j:
                print(a[i][j],end=" ")
            else:
                print(" ")