balance=70
def order(num):
    if(num<=balance):
        for i in range (num):
            print("Take it :)")
    else:
        for i in range(balance):
            print("Take it :)")
        print("Out of Stock")
    print("Happy Drinks!")


n=int(input("How Many Pepsi Bottles Would you Like? : "))
order(n)
