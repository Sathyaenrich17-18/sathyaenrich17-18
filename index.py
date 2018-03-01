number=int(input().strip())
array=list(map(int,input().split()))

f=0
count=0

for i in array:
    x=int(i)
    if x==number:  #checks if the element is present in the array or not..
        count+=1
        f+=1
        break
if f==0:
    print("-1")
else:
    print(count,end="")
