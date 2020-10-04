def xorsum(n):
    x = [n,1,n+1,0]
    return x[n%4]
x = int(input("Enter any number"))
print("xor sum is: ",xorsum(x))
