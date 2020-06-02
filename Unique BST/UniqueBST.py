#For n number of nodes there are following possibilities:-
# 1)0 node in left subtree and n-1 nodes in right subtree
# 2)2 node in left subtree and n-2 nodes in right subtree
#.........
# i)i node in left subtree and n-i nodes in right subtree
#hence the solution for n nodes will be:-
# l[0]*l[n-1]+l[1][n-2]+......+l[n-1][0]

def uniqueBST():
    n=int(input("Enter the number of nodes:"))
    l=[0]*(n+1)                                       
    l[0]=1                                            
    l[1]=1
    for i in range(2,len(l)):
        count=0
        j=0
        while j<=i-1:
            count+=(l[j]*l[i-j-1])
            j+=1
        l[i]=count
    return l[n]

def main():
    print("Answer:",uniqueBST())

if __name__=='__main__':
    main()
    
    
