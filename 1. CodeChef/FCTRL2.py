for i in range(int(input())):
    x = int(input())
    def factorial(n):
        if n==0:
            return 1
        elif n==1:
            return 1
        elif n>1:
            return n*factorial(n-1)
    print(factorial(x))

#SOLVED