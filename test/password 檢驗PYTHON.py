a="1234"
c=3
for i in range(c):
    b=input()
    if(i!=c):
        if(b==a):
            print("true!")
            break
        else:
            print("fulse")
    if(i==(c-1)):
        print("You Bad!")