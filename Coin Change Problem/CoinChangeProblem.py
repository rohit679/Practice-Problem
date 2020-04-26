def coin():
    y=int(input("How many coins you have:"))
    print("Enter all unique coin:")
    coins=[int(i) for i in input().split()]
    x=int(input("Enter Amount:"))
    possibilities=[0]*(x+1)
    possibilities[0]=1
    result=0
    for i in coins:
        for j in range(i,len(possibilities)):
            possibilities[j]+=possibilities[j-i]
    print("Total number of possibilities:",possibilities[x])
def main():
    coin()
if __name__=='__main__':
    main()
